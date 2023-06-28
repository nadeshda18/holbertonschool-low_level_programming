#include "main.h"
#include <stdio.h>
/**
 * puts2 - print every other character from a string, starting with the first letter
 * @str: pointer
 *
 * Return: (0)
 */
void puts2(char *str)
{
	int a = 0;
	char *b = str;
	int m = 0;
	int n;

	while (*b++)
	{
		a++;
	}
	m = a--;
	for (n = 0; n <= m; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
