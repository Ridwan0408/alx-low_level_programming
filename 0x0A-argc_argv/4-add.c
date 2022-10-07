#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main -  program that adds positive numbers.
 * @argc: the number of argument passed into the program
 * @argv: argument vector of the pointer to the string
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	char c;

	c = 48, 49, 50, 51, 52, 53, 54, 55, 56, 57;

	if (argc == 1)
	{
		printf("0\n");
	}

	else if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			sum += atoi(argv[i]);

			 printf("%d\n", sum);
		}
	}

	else if (argc != c)
	{

		printf("Error\n");
		return (1);
	}
	return (0);
}
