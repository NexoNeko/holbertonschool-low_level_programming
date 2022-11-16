#include "lists.h"
/**
 * listint_len - prints the number of nodes on the list
 *
 *@h: list to print the values of
 *
 *Return: Num of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
