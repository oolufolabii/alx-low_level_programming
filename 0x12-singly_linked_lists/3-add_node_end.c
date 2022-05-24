#include "lists.h"

/**
 * add_node_end - A stringlist funtion to print a list.
 * @head: Argument variable of the function.
 * @str: Argument variable of the function.
 * Return: Amount of nodes counted
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp = *head;
	unsigned int count = 0;

	while (str[count])
		count++;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new_node;

	return (new_node);
}
