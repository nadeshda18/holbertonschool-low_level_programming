#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_calloc - allocate memory for an array
 *@nmemb: array of
 *@size: elements of
 *
 *Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i = 0;
	int l = 0;

	l = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
