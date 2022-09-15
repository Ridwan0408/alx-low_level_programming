#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 *
 * Return: Always 0
 */

void print_alphabet_x10(void);

{
	char n, i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar (n);

		}
		_putchar ('\n');
	}
}
