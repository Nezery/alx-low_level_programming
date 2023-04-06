#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *reverse_listint - a function that reverse a list
 *
 * @head: points to the head
 *
 * Return: pointer to the head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *back = NULL;
	listint_t *next = NULL;

	while (*head)

	{
		next = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = next;
	}
	*head = back;
	return (*head);
}
