#include "lists.h"
/**
 *print_listint - prints the values in a list of ints
 *
 *@h: list to print the values of
 *
 *Return: Num of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		else
			printf("0\n");
		i++;
		h = h->next;
	}
	return (i);
}
