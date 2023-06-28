#include <stdio.h>
#include "main.h"
/**
 * puts_half - print the second half of a string
 *@str: pointer
 */
void puts_half(char *str)
{
	int a, n;
	int b = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		b++;
	}
	n = (b / 2);

	if ((b % 2) == 1)
	n = ((b + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	{
	_putchar('\n');
	}
}
