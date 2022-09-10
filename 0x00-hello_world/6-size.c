#include <stdio.h>

/**
 * main -print the string in the put function
 *
 * Description: using main function
 * this program prints the size of various types on the computer
 * Return: 0
 */
int main(void)
{
	int i;
	char c;
	float f;
	double d;

	printf("the size of an int is: %lu byte(s).\n", sizeof(i));
       	printf("the size of a char is: %lu byte(s).\n", sizeof(c));
       	printf("the size of a float is: %lu byte(s).\n", sizeof(f));
       	printf("the size of a double is: %lu byte(s).\n", sizeof(d));
	return(0);
}
