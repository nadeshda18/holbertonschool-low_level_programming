#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * sum_dlistint - returns the sum of all data
 * @head: pointer
 *
 * Return: sum or (0) if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
