#include "main.h"
#include <stdio.h>
/**
 * _isupper = verify for upper case characters
 *
 * @c: character c
 *
 * Return: (0)
 */

int _isupper(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
