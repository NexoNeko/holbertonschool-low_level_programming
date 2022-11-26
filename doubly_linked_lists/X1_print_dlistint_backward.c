#include "lists.h"
/**
 * _print_dlistint_backward - Prints all the values inside a link list backwards
 *
 * @h: Head of list to print
 *
 * Return: num of nodes
 */
size_t _print_dlistint_backward(const dlistint_t *h)
{
	int i = 0;

	while(h->next != NULL)
		h = h->next;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->prev;
	}
	return (i);
}
