#include <stdio.h>
/**
 * main - print the size of various types it is compiled and run on
 *
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %y byte(s)\n", sizeof(c));
printf("Size of an int: %y byte(s)\n", sizeof(i));
printf("Size of a long int: %y byte(s)\n" sizeof(li));
printf("Size of a long long int: %y (byte)s\n", sizeof(lli));
printf("Size of a float: %y byte(s)\n", sizeof(f));
return (0);
}
