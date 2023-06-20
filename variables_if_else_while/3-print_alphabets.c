#include <stdio.h>
/**
* main - Print in lowercase and uppercase
*
* Return: Always (0)
*/
int main(void)
{
char ch = 'a';
char hc = 'A';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (hc <= 'Z')
{
putchar(hc);
hc++;
}
putchar('\n');
return (0);
}
