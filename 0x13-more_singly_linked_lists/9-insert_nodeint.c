#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a given index in a listint_t
 * @head: First node
 * @idx: The index to add the given node
 * @n: The data in the new node
 *
 * Return: Pointer to the new node, otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current;
	listint_t *tmp = *head;

	current = malloc(sizeof(listint_t));
	if (!current || !head)
		return (NULL);

	current->n = n;
	current->next = NULL;

	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			current->next = tmp->next;
			tmp->next = current;
			return (current);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
