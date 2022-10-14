#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the multiplication of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *  op_div - calculates the division of two integers
 *  @a: the first integer
 *  @b: the second integer
 *  Return: the result of division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the remaider of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of remaider of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
