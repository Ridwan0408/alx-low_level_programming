#include "main.h"
#include <string.h>

/**
 * _puts -  a function that prints a string, followed by a new line, to stdout
 * @str: a parameter to _puts function
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar (*str);
	}
	_putchar ('\n');
}
