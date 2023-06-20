#include <stdio.h>
/**
* main - hexadecimal print numbers of base 16
*
* Return: Always (0)
*/
int main(void)
{
int num;
char cha;

for (num = 0; num <= 9; num++)
{
putchar(num + '0');
}
for (cha = 'a'; cha <= 'f'; cha++)
{
putchar(cha);
}
putchar('\n');
return (0);
}
