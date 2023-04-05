#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - a function that frees a lintint_t list
 *
 * @head: the head of the list
 *
 * Return: NULL
 */
void free_listint(listint_t *head)
{
	listint_t *freed;

	while (head != NULL)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}

