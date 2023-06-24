#include "main.h"
#include <stdio.h>
/**
 * print_line - draw straight lines
 *
 * @n: finish with character n
 * @i: as many times
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
			for (i = 0; i <= n; i++)
				{
					_putchar('_');
				}
	_putchar('\n');
	}
}
