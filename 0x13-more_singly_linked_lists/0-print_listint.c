#include <stdio.h>
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
	size_t alpha = 0;

	while (h)
	{
		printf("%d\n", h->n);
		alpha++;
		h = h->next;
	}
	return (alpha);
}

