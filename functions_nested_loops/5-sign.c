#include "main.h"
#include <stdio.h>
/**
 * print_sign - greater, the same or less than zero
 * @n: return value depending if n is less, zero or greater
 *
 * Return: (0)
 */
int print_sign(int n)
{
if (n >= 0)
{
_putchar('+');
return (1);
}
	else if (n <= 0)
	{
	_putchar('-');
	return (-1);
	}
else
{
_putchar('0');
return (0);
}
}
