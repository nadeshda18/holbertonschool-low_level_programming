#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * delete_dnodeint_at_index - delete the node at index
 * @head: double pointer
 * @index: of the node
 *
 * Return: (1) if succeded, (-1) on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (*head == 0)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
