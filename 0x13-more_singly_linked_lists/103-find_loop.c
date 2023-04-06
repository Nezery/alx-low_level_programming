#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - function that fiunds the loop
 * @head: pointyer to the first list
 *
 * Return: address of the loop
 */


listint_t *find_listint_loop(listint_t *head)

{
	listint_t *mango, *apple;

	mango = apple = head;

	while (mango && apple && apple->next)
	{
		mango = mango->next;

		apple = apple->next->next;

		if (mango == apple)

		{
			mango = head;
			break;
		}
	}
	if (!mango || !apple || !apple->next)
		return (NULL);
	while (mango != apple)
	{
		mango = mango->next;
		apple = apple->next;
	}
	return (apple);
}
