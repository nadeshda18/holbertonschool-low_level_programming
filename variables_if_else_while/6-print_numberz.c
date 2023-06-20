#include <stdio.h>
/**
* main - print all numbers from base 10
*
* Return: Always (0)
*/
int main(void)
{
int x;
for (x = 0; x < 10; x++)
{
if (x < 9)
putchar(x);
}
putchar('\n');
return (0);
}
