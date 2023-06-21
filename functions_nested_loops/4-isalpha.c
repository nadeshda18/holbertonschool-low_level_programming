#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check for alphabetic characters, upper or lower case
 * @c: returns value if letter, lower or uppercase
 *
 * Return: (0)
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
