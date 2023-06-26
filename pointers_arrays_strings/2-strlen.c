#include "main.h"
#include <stdio.h>
/**
 * _strlen - return the length of a string
 * @s: character name
 *
 * Return: a
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
	a++;
	s++;
	}
	return a;
}
