#include <stdio.h>
/**
* main - print lowercase alphabet in reverse
*
* Return: Always (0)
*/
int main(void)
{
char ch = 'z';

while ('a' <= ch)
{
putchar(ch);
ch--;
}
putchar('\n');
return (0);
}
