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

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
