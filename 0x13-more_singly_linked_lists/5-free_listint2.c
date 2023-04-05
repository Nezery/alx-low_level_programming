#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - functions that free Listint_t
 * @head: header pointer
 *
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *freelist;

	if (head == NULL)
		return;
	while (*head)
	{
		freelist = (*head)->next;
		free(*head);
		*head = freelist;
	}
	*head = NULL;
}
