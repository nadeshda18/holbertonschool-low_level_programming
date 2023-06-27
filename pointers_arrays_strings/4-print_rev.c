#include "main.h"
#include <stdio.h>
/**
 * print_rev - print a verse in reverse
 * @s: character name
 *
 */
void print_rev(char *s)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
	a++;
	s++;
	}
	s--;
	for (b = a; b > 0; b--)
	{
	printf("%c", *s);
	s--;
	}
	printf("\n");
}
