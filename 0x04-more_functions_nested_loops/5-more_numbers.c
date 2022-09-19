#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int n;
	int a;

	for (n = 0; n <= 10; n++)
	{
		for (a = 0; a <= 14; a++)
		{
			putchar (a);
		}
		putchar (n);
	}
	putchar ('\n');
}
