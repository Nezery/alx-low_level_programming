#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


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
	size_t alpha;

	alpha = 0;


	while (h != NULL)
	{
		printf("%d\n", h->n);
		alpha++;
		h = h->next;
	}
	return (alpha);
}

