#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * main - main function
 * @argc: count
 * @argv: arguments
 *
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((atoi(argv[2]) == atoi("/") || atoi(argv[2]) == atoi("%")) && atoi(argv[3]) == 0)
		{
		printf("Error\n");
		exit(100);
		}

	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}


