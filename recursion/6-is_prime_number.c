#include "main.h"
#include <stdio.h>
/**
 * is_prime - function to find prime
 * @n: integer
 * @divisor: integer
 *
 * Return: one for prime number, zero othweise
 */
int is_prime(int n, int divisor)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % divisor == 0)
		return (0);
	if (divisor * divisor > n)
		return (1);
	return (is_prime(n, divisor + 2));
}

/**
 * is_prime_number - find the prime numbers
 * @n: integer
 *
 * Return: one or zero
 */
int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	if (n % 2 == 0)
		return (0);
	return (is_prime(n, 3));
}
