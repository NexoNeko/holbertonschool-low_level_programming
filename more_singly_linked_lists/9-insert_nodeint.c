#include "lists.h"
/**
 * insert_nodeint_at_index - insterts a new node at the given index
 *
 * @head: List to go through
 * @idx: Nth of index in which to add the new node
 * @n: Information to store
 *
 * Return: Address of new node, NUll i fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nuNode = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!nuNode || !head)
		free(nuNode);
	else
	{
		if (idx == 0)
		{
			nuNode->n = n;
			nuNode->next = (*head);
			(*head) = nuNode;
			return (nuNode);
		}
		while (idx > 1 && temp)
		{
			temp = temp->next;
			idx--;
			if (!temp)
				free(nuNode);
		}
	}
	if (temp)
	{
		nuNode->n = n;
		nuNode->next = temp->next;
		temp->next = nuNode;
		return (nuNode);
	}
	return (NULL);
}
