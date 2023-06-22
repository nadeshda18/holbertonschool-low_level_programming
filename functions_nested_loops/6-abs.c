#include "main.h"
#include <stdio.h>
/**
 * _abs - the absolute value of an integer
 *@r: shows the absolute value
 *
 * Return: Absolute value
 */
int _abs(int r)
{

if (r < 0)
{
	int abs_val;

	abs_val = r * -1;
	return (abs_val);
}
return (r);
}
