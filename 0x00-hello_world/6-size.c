#include <stdio.h>

/**
 * main - Prints the sizeof many variable types.
 *
 * Description: using main function
 * this program prints the size of various types on the computer.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("size of an int is: %lu byte(s)\n", (unsigned long)sizeof(i));
       	printf("size of a char is: %lu byte(s)\n", (unsigned long)sizeof(c));
       	printf("size of a float is: %lu byte(s)\n", (unsigned long)sizeof(f));
        printf("size of a long int is: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("size of a long long int is: %lu byte(s)\n",(unsigned long) sizeof(lli));
	return(0);
}
