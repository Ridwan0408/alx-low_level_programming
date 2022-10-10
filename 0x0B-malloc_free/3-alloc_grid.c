#include "main.h"

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: the first dimension
 * @height: the second dimension
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, n;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);
	if (array != NULL)
	{
		for (; i < height; i++)
		{
			array[i] = (int *) malloc(sizeof(int) * width);

			if (array[i] != NULL)
			{
				for (n = 0; n < width; n++)
					array[i][n] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(array[i]);
					i++;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	return (NULL);
}
