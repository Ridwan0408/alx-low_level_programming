#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: the character to be tested
 * Return: 1 if it uppercase, 0 otherwise
 */

int _isupper(int c)

{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
