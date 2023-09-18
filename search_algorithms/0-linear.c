#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - search a value in an array of integers using
 * @array: pointer to the first element to search in
 * @size: number of elements in array
 * @value: to seach for
 *
 * Return: first idx where the value is located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
