#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * dlistint_len - returns the number of elements
 * @h: pointer
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
