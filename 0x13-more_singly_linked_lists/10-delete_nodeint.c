#include "lists.h"

#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at an nth index
 * @head: First node
 * @index: Index to delete node
 *
 * Return: 1 if success and -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}

	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}