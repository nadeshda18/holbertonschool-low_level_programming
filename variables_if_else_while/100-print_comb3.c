#include <stdio.h>
/**
 * main - print numbers in combination
 *
 * Return: (0)
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
	for (j = i +1; j <= 9; j++)
	{
	putchar(i + '0');
	putchar(j + '0');
	putchar(',');
	putchar(' ');
	}
	}
	return (0);
}
