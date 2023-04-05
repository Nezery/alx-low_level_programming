#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number
 * of element ina list
 * @h: head of node
 *
 * Return: number of node
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t alpha = 0;

	while (h != NULL)
	{
		h = h->next;
		alpha++;
	}
	return (alpha);
}
