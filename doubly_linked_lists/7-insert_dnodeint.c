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
	dlistint_t *nuNode, *temp;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;
	while (idx > 1 && temp && temp->next)
	{
		temp = temp->next;
		idx--;
	}

	nuNode = malloc(sizeof(dlistint_t));
	if (nuNode == NULL)
		return (NULL);
	if (idx > 1 || temp == NULL)
		return (NULL);

	nuNode->n = n;

	if (temp->next != NULL)
		temp->next->prev = nuNode;
	nuNode->prev = temp;
	nuNode->next = temp->next;
	temp->next = nuNode;

	return (nuNode);
}
