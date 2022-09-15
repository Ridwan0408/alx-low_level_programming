#include "main.h"

/**
 * main - prints alphabet
 *
 * Description: using main function
 * this program prints alphabets in lower case.
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar (n);
	}
	_putchar ('\n');


}
