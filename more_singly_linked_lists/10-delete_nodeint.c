#include "lists.h"
/**
 * delete_nodeint_at_index - deltes the node at the given index
 *
 * @head: The list to go through
 * @index: Index of the node to delete
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *olNode = NULL, *nexNod = NULL;

	if (!head || !*head)
		return (-1);
	olNode = *head;
	nexNod = (*head)->next;

	if (index == 0)
		(*head) = nexNod;
	else
	{
		while (index > 0)
		{
			olNode = nexNod;
			nexNod = nexNod->next;
			index--;
			if (!olNode)
				return (-1);
			if (index == 1)
				olNode->next = nexNod->next;
		}
	}
	free(olNode);
	return (1);
}
