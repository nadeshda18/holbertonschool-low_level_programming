#include <stdio.h>
/**
 * main - print any possible combination between two two digit numbers
 *
 * Return: void
 */
int main(void)
{
	int k;
	int l;
	int i;
	int j;

	for (k = 0; k <=9; k++)
	{
	for (l = 0; l <= 9; l++)
	{	
	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	putchar(k + '0');
	putchar(l + '0');
	putchar(' ');
	putchar(i + '0');
	putchar(j + '0');
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	return (0);
}
