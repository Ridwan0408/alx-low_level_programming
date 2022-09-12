#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using the main function
 * this program prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)

	{
		putchar(c);
	}

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
