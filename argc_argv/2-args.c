#include "main.h"
#include <stdio.h>
/**
 * main - print all arguments it receives
 *@argc: unused integer argc
 *@argv: character
 *
 * Return: (0)
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
