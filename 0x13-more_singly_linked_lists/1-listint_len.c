#include "lists.h"

/**
 * listint_len - A singly linked list funtion to print the number of elements
 * in a linked list.
 * @h: Argument variable of the linked list function of type listint_t to traverse.
 * Return: Amount of nodes counted
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
