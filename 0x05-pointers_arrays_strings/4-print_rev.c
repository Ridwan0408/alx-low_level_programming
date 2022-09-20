#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string, in reverse,
 * @s: the string to be used
 *
 */

void print_rev(char *s)
{
	int n;
	int i;

	n = 0;
	while (s[n] != '\n')
		n++;

	for (i = n - 1; n > 0; n--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}