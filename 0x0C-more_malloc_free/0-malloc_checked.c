#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: the memory to allocate
 * Return: pointer to the allocated memory or normal process termination
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
