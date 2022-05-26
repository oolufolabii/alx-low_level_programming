#include "lists.h"

/**
 * add_nodeint - adding a new node at the beginning of the linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *firstNode;

	if (!firstNode)
		return (NULL);

	firstNode->n = n;
	firstNode->next = *head;
	*head = firstNode;

	return (firstNode);
}
