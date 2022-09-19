#include "main.h"
#include <stdio.h>

/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n: parameter:wq
 *
 *
 * Return: return nothing
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		putchar ('_');
	}
	putchar ('\n');
}
