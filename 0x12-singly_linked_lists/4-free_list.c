#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: The node at the Beginning
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
