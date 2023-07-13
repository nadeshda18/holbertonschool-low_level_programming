#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - create an array min - max
 * @min: size min
 * @max: size max
 *
 * Return: NULL on failure, pointer
 */
int *array_range(int min, int max)
{
	int i;
	int size = max - min + 1;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min + i;

	return (ptr);
}
