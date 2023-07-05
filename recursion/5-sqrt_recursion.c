#include "main.h"
#include <stdio.h>
/**
 * sqrt_number - help for the square number
 * @a: belongs to integer n
 * @b: sum
 *
 * Return: result
 */
int sqrt_number(int a, int b)
{
	if (a == (b * b))
			return (b);

	else if ((b * b) > a)
			return (-1);

	else
			return (sqrt_number(a, b + 1));
}
/**
 * _sqrt_recursion - natural square root of a number
 * @n: integer, value
 *
 * Return: the result of sqrt_number
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_number(n, 0));
}
