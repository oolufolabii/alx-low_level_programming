#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *down = head;
	listint_t *top = head;

	if (!head)
		return (NULL);

	while (down && top && top->next)
	{
		top = top->next->next;
		down = down->next;
		if (top == down)
		{
			down = head;
			while (down != top)
			{
				down = down->next;
				top = top->next;
			}
			return (top);
		}
	}

	return (NULL);
}
