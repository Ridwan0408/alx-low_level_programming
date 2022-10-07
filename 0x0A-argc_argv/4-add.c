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
	int i, num, sum = 0;

	if (argc == 0)
		printf("0\n");

	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
		printf("Total = %d\n", sum);
	}

	for (num = 48; num < 57;)
	{
		if (argc != num)
			printf("Error\n");
		return (1);
	}
	return (0);
}
