#include "lists.h"
/**
 * print_list - Prints all the values inside a linked list
 *
 * @h: Head of list to print
 *
 * Return: num of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
