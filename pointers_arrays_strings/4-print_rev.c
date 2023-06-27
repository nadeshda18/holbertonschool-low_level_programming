#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a verse in reverse
 * @s: character name
 *
 */
void print_rev(char *s)
{
	char a = 0;
	char b;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
