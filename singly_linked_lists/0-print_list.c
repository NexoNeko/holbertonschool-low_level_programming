#include "lists.h"
/**
 * print_list - Prints all the values inside a linked list
 *
 * @h: Head of list to print
 *
 * Return: num of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
