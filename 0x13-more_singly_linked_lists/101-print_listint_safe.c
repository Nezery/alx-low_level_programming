#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 *  looped_listint_len - count the function of a unique node
 * @head: point to the first node
 *
 * Return: the numnber of node in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *fast, *slow;
	size_t node2 = 1;

	if (head == NULL || head->next == NULL)

		return (0);
	slow = head->next;
	fast = (head->next)->next;
	while (fast)

	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				node2++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				node2++;
				slow = slow->next;
			}
			return (node2);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - Prints a list safely.
 * @head: A points to the fist node
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)

{
	size_t node2, index = 0;

	node2 = looped_listint_len(head);
	if (node2 == 0)
	{
		for (; head != NULL; node2++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < node2; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("->[%p] %d\n", (void *)head, head->n);
	}
	return (node2);
}
