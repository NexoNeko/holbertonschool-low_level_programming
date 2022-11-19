#include "lists.h"
/**
 * sum_listint - sums all the values contained wtihin each node in a list
 *
 * @head: - The linked list to go through
 *
 * Return: Sumof all nums
 */
int sum_listint(listint_t *head)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
