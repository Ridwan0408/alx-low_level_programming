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
	long int li;
	long long int lli;

	printf("the size of an int is: %ld byte(s)\n", sizeof(i));
       	printf("the size of a char is: %ld byte(s)\n", sizeof(c));
       	printf("the size of a float is: %ld byte(s)\n", sizeof(f));
        printf("the size of a long int is: %ld byte(s)\n", sizeof(li));
	printf("the size of a long long int is: %ld byte(s)\n", sizeof(lli));
	return(0);
}
