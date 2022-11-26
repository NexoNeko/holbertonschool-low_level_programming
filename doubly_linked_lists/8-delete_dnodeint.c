#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at the specific index
 *
 * @head: List to go through
 * @index: Nth of index in which to add the new node
 *
 * Return: Address of new node, -1 it fails.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;

	if (!head)
		return (-1);
	if (head)
	{
		while (index && temp)
		{
			temp = temp->next;
			index--;
		}
		if (index)
			return (-1);
		if (!index && temp)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			if (temp->prev)
				temp->prev->next = temp->next;
			else
				*head = temp->next;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
