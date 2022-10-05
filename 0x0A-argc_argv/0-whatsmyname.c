#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: the number of argument passed into the function
 * @argv: the argument vector of pointer to string
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

