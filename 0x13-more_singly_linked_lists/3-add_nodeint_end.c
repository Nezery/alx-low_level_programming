#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a list
 *
 * @head: double pointer
 * @n: input data
 *
 * Return: address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new;
	listint_t *temp;

	if (add_new == NULL)
		return (NULL);
	add_new = malloc(sizeof(listint_t));
	if (head == NULL)
		return (NULL);
	add_new->n = n;
	add_new->next = NULL;
	if (*head == NULL)
	{
		*head = add_new;
		return (add_new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = add_new;
	return (add_new);
}


