#include "main.h"
#include <stdio.h>

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int n1, n2;

	for (n1 = 48; n1 <= 57; n1++)
	{
		for (n2 = 48; n2 <= 62; n2++)
		{
			putchar (n2);
		}
		putchar (n1);
	}
	putchar ('\n');
}
