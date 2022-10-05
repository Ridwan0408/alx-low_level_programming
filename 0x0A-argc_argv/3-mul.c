#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 * @argc: number of arguments passed into the program
 * @argv: argument of the vector of pointer to string
 * Return: Alwyas 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;
	
	if (argc != 3)
		printf("Error\n");
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
