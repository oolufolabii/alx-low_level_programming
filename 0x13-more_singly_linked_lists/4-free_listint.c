#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: listint_t list to be freed
 * No return void function
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}