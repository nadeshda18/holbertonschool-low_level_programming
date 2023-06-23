#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - all but two and four
 *
 * Return: (0)
 */
void print_most_numbers(void)
{
	int x;
	{
	for (x = 0; x <= 9; x++)

		if (x != 2 && x != 4)
	{
	_putchar(x + '0');
	}
	}
}
