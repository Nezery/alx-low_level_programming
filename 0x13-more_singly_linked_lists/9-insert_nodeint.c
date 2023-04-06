#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: double pointer
 * @idx: index of the node
 * @n: value of new node
 *
 *
 * Return: node address
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int in;
	listint_t *beta, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		beta = *head;
		for (in = 0; in < idx - 1 && beta != NULL; in++)
		{
			beta = beta->next;
		}
		if (beta == NULL)
			return (NULL)
	}
	new =  malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = beta->next;
	beta->next = new;

	return (new);
}
