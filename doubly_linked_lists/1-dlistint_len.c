#include "lists.h"
/**
 * dlistint_len - Prints all the values inside a linked list
 *
 * @h: Head of list to print
 *
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
