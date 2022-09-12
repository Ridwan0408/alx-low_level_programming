#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: using main function
 * this program prints the alphabet in lower case.
 *
 * Return: Always 0
 */

int main(void)

{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
		putchar("\n");

	return (0);
}
