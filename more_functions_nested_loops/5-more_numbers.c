#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print ten times numbers in a range from zero to fourteen
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int x;
	int j;

	for (x = 0; x < 10; x++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
					_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
		}

		_putchar('\n');
	}
}
