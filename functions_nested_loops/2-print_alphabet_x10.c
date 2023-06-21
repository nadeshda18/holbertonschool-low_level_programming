#include "main.h"
#include <stdio.h>
/**
 *print - the alphabet in lowercase ten times
 *
 */
void print_alphabet_x10(void)
{
char ch;
int i = 0;

	while (i <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
	_putchar('\n');
	i++;
	}
}
