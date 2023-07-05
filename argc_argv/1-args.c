#include <stdio.h>
#include "main.h"
/**
 * main - print number of argument without counting argc
 * @argc: integer to be counted
 * @argv: unused attribute
 *
 * Return: (0)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
