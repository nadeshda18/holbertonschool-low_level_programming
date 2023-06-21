#include "main.h"
#include <stdio.h>
/**
 * _abs - the absolute value of an integer
 *@r: shows the absolute value
 *
 * Return: (0)
 */
int _abs(int r)
{

if (r < 0)
	{
	r = (-1) * r;
	_putchar(r);
	}
else
{
_putchar(r);
}
return (0);
}
