#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string.
 *
 * @s: the string to be used
 *
 */

void rev_string(char *s)
{

	char n;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	length2 = length1 - 1;
		for (i = 0; i < length1; i++)
		{
			"sum" ; "mus"

			n = s[i];
			s[length2] = n;
			length2 -= 1;
		}
}
