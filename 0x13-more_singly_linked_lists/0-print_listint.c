#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * print_listint - function that prints a list
 *
 * @h: head of a link
 *
 * Return: the number of node
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	count++;
	}
	return (count);
}

