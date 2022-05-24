#include "lists.h"

/**
 * list_len - A stringlist funtion to print a list.
 * @h: Argument variable of the function.
 * Return: Amount of nodes counted
 */
size_t list_len(const list_t *h)
{
size_t nodecount = 0;

while (h)
{

nodecount++;
h = h->next;
}
return (nodecount);
}
