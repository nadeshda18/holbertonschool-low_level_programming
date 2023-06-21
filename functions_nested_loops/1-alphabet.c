#include "main.h"
/**
 * main - write the alphabet in lowercase
 *
 */

void print_alphabet(void)
{

char ch = 'a';

while (ch <= 'z')
{
	_putchar(ch);
	ch++;
}
_putchar('\n');
}
