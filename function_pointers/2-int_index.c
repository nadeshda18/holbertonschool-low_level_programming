#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for integer
 * @array: pointer to
 * @size: size of int
 * @cmp: function pointer
 * Return: -1 on fail
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
	}
	return (-1);
}
