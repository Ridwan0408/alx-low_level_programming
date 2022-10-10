#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: the argument count
 * @av: the argument  vector
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i = 0, j = 0, k = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (j < ac)
	{
		k = 0;
		while (av[j][k] != '\0')
		{
			i++;
			k++;
		}
		j++;
	}

	i = i + ac + 1;
	str = malloc(sizeof(char) * i);
	if (str == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			str[l] = av[j][k];
			l++;
		}
		str[l] = '\n';
		l++;
	}
	return (str);
}
