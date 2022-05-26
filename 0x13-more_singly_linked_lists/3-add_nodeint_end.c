#include "lists.h"

/**
 * add_nodeint - adding a new node at the end of the linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *lastNode;
	listint_t *temp = *head;

	lastNode = malloc(sizeof(listint_t));
	if (!lastNode)
		return (NULL);

	lastNode->n = n;
	lastNode->next = NULL;

	if (*head == NULL)
	{
		*head = lastNode;
		return (lastNode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = lastNode;

	return (lastNode);
}
