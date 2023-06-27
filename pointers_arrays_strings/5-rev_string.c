#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: pointer
 *
 */
void rev_string(char *s)
{
	int a = 0;
	char c;

	while (*s != '\0')
	{
	a++;
	s++;
	}
	s--;
	for (c = a; c > 0; c--)
	{
	printf("%c", *s);
	s--;
	}
}

