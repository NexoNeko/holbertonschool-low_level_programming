#include "lists.h"
/**
 *print_listint - prints the values in a list of ints
 *
 *@h: list to print the values of
 *
 *Return: num of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
			printf("%d", h->n);
		else
			printf("0");
		i++;
		h = h->next;
	}
	return (i);
}
