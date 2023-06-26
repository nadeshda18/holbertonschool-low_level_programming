#include "main.h"
/**
 * swap_int - swap the values of two intergers
 * @a: first integer
 * @b: second integer
 *
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
