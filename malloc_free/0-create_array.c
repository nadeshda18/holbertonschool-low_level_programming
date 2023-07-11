#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - of chars
 * @size: unsigned integer size
 * @c: specified character
 *
 * Return: (p)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (p == NULL || size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
