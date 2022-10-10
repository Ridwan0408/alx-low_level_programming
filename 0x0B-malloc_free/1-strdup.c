#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory,  which contains a copy of the
 * string given as a parameter.
 * @str: string to be copied
 * Return: NULL if error, otherwise pointer to the allocated space.
 */
char *_strdup(char *str)
{
	char *cp;
	int index;
	int len;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;
	cp = malloc(sizeof(char) * len);

	if (cp == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		cp[index] = str[index];

	cp[len] = '\0';

	return (cp);
}
