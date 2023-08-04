#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - return the nth node
 * @head: pointer
 * @index: of the node
 *
 * Return: pointer to the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
