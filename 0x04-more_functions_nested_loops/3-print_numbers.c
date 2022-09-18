#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: return nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar (n);
	}
	putchar ('\n');
}
