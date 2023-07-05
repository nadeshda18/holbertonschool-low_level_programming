#include "main.h"
#include <stdio.h>
/**
 * _strchr - locate a character in a string
 * @s: pointer
 * @c: character (byte)
 *
 * Return: s or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return (NULL);
}
