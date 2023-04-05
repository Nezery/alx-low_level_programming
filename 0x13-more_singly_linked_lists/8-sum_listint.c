#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data
 * @head: header pointer
 *
 *
 * Return: if empty return 0
 *
 */
int sum_listint(listint_t *head)
{
	int sumtotal = 0;

	listint_t *temp = head;

	while (temp != NULL)
	{
		sumtotal += temp->n;
		temp = temp->next;
	}
	return (sumtotal);
}

