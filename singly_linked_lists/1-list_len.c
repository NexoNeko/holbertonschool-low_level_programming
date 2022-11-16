#include "lists.h"
/**
 * list_len - prints the num of elements in a linked list
 *
 * @h: head of the list
 *
 * Return: num of nodes
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
