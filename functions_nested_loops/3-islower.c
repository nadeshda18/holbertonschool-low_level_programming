#include "main.h"
#include <stdio.h>
/**
 *
 * int _islower(int c) : verify for lowercase letters
 *
 * Return: (0)
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
