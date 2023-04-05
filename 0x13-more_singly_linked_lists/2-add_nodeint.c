#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add node at the beginning of a listint_t list.
 *
 *
 * @head: double head pointer
 *
 * @n: add to the list
 *
 * Return: or NULL if it fails
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cat;

	if (head == NULL)
		return (NULL);
	cat = malloc(sizeof(listint_t));
	if (cat == NULL)
		return (NULL);
	cat->n = n;
	cat->next = *head;

	*head = cat;
	return (cat);
}
