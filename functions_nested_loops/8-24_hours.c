#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - print every minute of the day
 *
 */
void jack_bauer(void)
{
int a, b, c, d;

for (a = 0; a <= 3; a++)
{
for (b = 0; b <= 4; b++)
{
if ((a <= 2 && b <= 4) || (c <= 6 && d <= 9))
{
for (c = 0; c <= 6; c++)
{
for (d = 0; d <= 9; d++)
{
_putchar(a + '0');
_putchar(b + '0');
_putchar(58);
_putchar(c + '0');
_putchar(d + '0');
_putchar('\n');
}
}
}
}
}

}
