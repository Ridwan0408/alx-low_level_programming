#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: return nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 50)
		{
			continue;
		}
		else if (n == 52)
		{
			continue;
		}

		putchar (n);

	}

	putchar ('\n');
}

