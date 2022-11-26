#include "lists.h"
/**
 * add_dnodeint_end - adds a node to the end of the list
 *
 * @head: Pointer to the list
 * @n: Information to be contained
 *
 * Return: pointer to last node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nuNode = malloc(sizeof(dlistint_t));
	dlistint_t*temp;

	temp = *head;
	if (*head)
		while (temp->next != NULL)
			temp = temp->next;
	if (!nuNode)
		free(nuNode);
	else
	{
		nuNode->n = n;
		nuNode->next = NULL;
	}
	if (!temp)
		*head = nuNode;
	else
	{
		temp->next = nuNode;
		nuNode->prev = temp;
	}
	return (nuNode);
}
