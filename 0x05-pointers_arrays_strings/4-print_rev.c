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

	s = "hello";
	n = strlen(s);
	for (; n >= 0; n--)
	{
		_putchar (*s);
	}
}
