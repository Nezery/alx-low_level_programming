#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that delete a node
 * @head: pointer to the head
 * @index:  index of the node
 *
 * Return:  1 success or -1 fail
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *beta = *head;
	listint_t *curr = NULL;

	unsigned  int in = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head =  (*head)->next;
		free(beta);
		return (1);
	}
	while (in < index - 1)
	{
		if (!beta || !(beta->next))
			return (-1);
		beta = beta->next;
		in++;
	}
	curr = beta->next;
	beta->next = curr->next;
	free(curr);
	return (1);
}
