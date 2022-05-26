#include "lists.h"

/**
 * sum_listint - A stringlist funtion to print a list.
 * @head: Argument variable of the function.
 * Return: Amount of nodes counted
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
