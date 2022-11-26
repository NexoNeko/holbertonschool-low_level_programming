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
	dlistint_t *temp, *nexNodd;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	if (index == 1)
	{
		temp = (*head)->next;
		(*head)->next = temp->next;
		(*head)->prev = temp->prev;
		free(temp);
		return (1);
	}
	while (i < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		i++;
		temp = temp->next;
		nexNodd = temp->next;
	}
	temp->next = nexNodd->next;
	temp->prev = nexNodd->prev;
	free(nexNodd);
	return (1);
}
