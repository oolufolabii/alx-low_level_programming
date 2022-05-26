#include "lists.h"

/**
 * print_listint - A string list funtion to print content of a list.
 * @h: Argument variable of linked list type to print.
 * Return: Amount of nodes counted
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
