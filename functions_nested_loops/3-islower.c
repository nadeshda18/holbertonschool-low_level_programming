#include "main.h"
#include <stdio.h>
/**
 * _islower - verify lower case letters
 *
 * @c: returns the value of one or zero
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
