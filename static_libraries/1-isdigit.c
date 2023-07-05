#include "main.h"
#include <stdio.h>
/**
 * _isdigit - verify for digits
 *
 * @c: gives value depending on if digit or not
 *
 * Return: (0)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		{
		return (1);
		}
	else
	{
	return (0);
	}
}
