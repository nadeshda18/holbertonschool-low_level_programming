#include <stdio.h>
/**
* main - print all possible combinations of single-digit numbers
*
* Return: Always (0)
*/
int main(void)
{
int x;

for (x = 0 ; x <= 8 ; x++)
{
putchar(x + '0');
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
