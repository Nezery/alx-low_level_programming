#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the nodes
 * @head: a double pointer
 *
 * Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int x;

	if (head == NULL || *head == NULL)
		return (0);

	delete = *head;
	*head =  delete->next;
	x = delete->n;
	free(delete);

	return (x);
}
