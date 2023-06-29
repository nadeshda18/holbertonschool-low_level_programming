#include "main.h"
#include <stdio.h>
/**
 * string_toupper - from lowercase to uppercase
 * @s: pointer
 * Return: 0
 *
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
	}
	return (0);
}


