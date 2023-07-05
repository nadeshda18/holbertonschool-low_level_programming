#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string
 * @str: pointer name
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
