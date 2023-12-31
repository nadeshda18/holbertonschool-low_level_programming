#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * malloc_checked - check if malloc failed
 * @b: unsigned integer
 *
 * Return: (98) if failed
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(sizeof(char) * b);
	{
	if (ptr == NULL)
		exit(98);
	}
	return (ptr);
}
