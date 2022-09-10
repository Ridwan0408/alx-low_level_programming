#include <stdio.h>

/**
 * main - Prints the sizeof many variable types
 *
 * Description: using main function
 * this program prints the size of various types on the computer
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	float f;
	long int li;
	long long int lli;

	printf("size of an int is: %d byte(s)\n", sizeof(i));
       	printf("size of a char is: %d byte(s)\n", sizeof(c));
       	printf("size of a float is: %d byte(s)\n", sizeof(f));
        printf("size of a long int is: %d byte(s)\n", sizeof(li));
	printf("size of a long long int is: %d byte(s)\n", sizeof(lli));
	return(0);
}
