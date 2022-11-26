#include "lists.h"
/**
 * add_dnodeint - adds a new node to the begining of the list
 *
 * @head: List to add a node to
 * @n: Value to store in the new node
 *
 * Return: Pointer to last node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nuNode = malloc(sizeof(dlistint_t));

	if (!nuNode || !head)
		free(nuNode);
	else
	{
		if (*head)
			(*head)->prev = nuNode;
		nuNode->n = n;
		nuNode->next = (*head);
		(*head) = nuNode;
	}
	return (nuNode);
}
