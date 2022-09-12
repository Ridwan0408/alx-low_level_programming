#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: usimg the main function
 * this program prints the alphabet in lowercase.
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q')
			continue;
		else if (c == 'e')
			continue;
		putchar (c);
	}
	putchar ('\n');

	return (0);
}
