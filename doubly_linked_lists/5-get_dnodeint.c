#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a listint_t linked list.
 *
 * @head: - The linked list to go through
 * @index: - the index num desired
 *
 * Return: pointer to node if found, else,NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
