#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number
 *
 * Return: the square root of the number
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(n));
}
/**
 * _sqrt - returns the square root of a number.
 * @n: the test number
 * @x: squared number
 *
 * Return: the square root of the number
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
