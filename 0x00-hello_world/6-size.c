#include <stdio.h>

/**
 * main - Prints the sizeof many variable types.
 *
 * Description: using main function
 * this program prints the size of various types on the computer.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));

	printf("size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));

	printf("size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(li));

	printf("size of a long long int is: %lu byte(s)\n", (unsigned long) sizeof(lli));

	printf("size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
