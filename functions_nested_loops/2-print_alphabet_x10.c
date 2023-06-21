#include "main.h"
/**
 *print alphabet x10 - in lowercase
 *
 */

void print_alphabet_x10(void)
{
char ch = 'a';
int i = 0;

for (ch = 'a'; ch <= 'z' ; ch++)

	while (i <= 9)
	{
	_putchar(ch);
	}
_putchar('\n');
}
