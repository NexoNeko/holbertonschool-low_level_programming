#include "lists.h"
/**
 * insert_dnodeint_at_index - insterts a new node at the given index
 *
 * @h: List to go through
 * @idx: Nth of index in which to add the new node
 * @n: Information to store
 *
 * Return: Address of new node, NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nuNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;

	if (!nuNode || !h)
		free(nuNode);
	else
	{
		if (idx == 0)
		{
			return (add_dnodeint(h, n));
		}
		while (idx >= 1 && temp)
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
		nuNode->prev = temp;
		temp->next = nuNode;
		return (nuNode);
	}
	return (NULL);
}
