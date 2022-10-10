#include "main.h"

/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the character
 * Return: Returns a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int n;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		array[n] = c;

	return (array);
}
