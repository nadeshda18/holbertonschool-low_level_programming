#include <stdio.h>
/**
* main - print the alphabet in lower case
*
* Return: Always (0)
*/
int main(void)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
