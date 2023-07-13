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

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(sizeof(int) * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
