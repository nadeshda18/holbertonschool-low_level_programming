#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dlistint - free the list
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
