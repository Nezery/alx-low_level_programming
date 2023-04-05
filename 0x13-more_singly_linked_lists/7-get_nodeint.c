#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node
 * @index: index of the node starting from 0
 * @head: header pointer
 *
 * Return: NULL if node doesnt exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int in;

	listint_t *temp = head;

	if (head == NULL)
		return (NULL);

	for (in = 0; in < index; in++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
