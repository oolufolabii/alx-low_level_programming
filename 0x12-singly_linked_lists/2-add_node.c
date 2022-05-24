#include "lists.h"

/**
 * add_node - A stringlist funtion to print a list.
 * @head: Argument variable of the function.
 * @str: Argument variable of the function.
 * Return: Amount of nodes counted
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node2;
	unsigned int len = 0;

	while (str[len])
		len++;

	node2 = malloc(sizeof(list_t));
	if (!node2)
		return (NULL);

	node2->str = strdup(str);
	node2->len = len;
	node2->next = (*head);
	(*head) = node2;

	return (*head);
}
