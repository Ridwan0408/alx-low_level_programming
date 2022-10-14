#include "3-calc.h"

/**
 * main - main function
 * @argc: the number of arguments
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, result;
	char c;
	int (*func)(int, int);

	if (argc != 2)
	{
		printf("Error\n");
		exit(98);
	}

	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	c = *argv[2];
	if ((c == '/' || c == '%') && arg2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(arg1, arg2);

	printf("%d\n", result);

	return (0);
}
