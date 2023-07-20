#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a function on an array
 * @array: pointer to function
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
