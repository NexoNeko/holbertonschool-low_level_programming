#include "lists.h"
/**
 * add_nodeint - adds a new node to the begining of the list
 *
 * @head: List to add a node to
 * @n: Value to store in the new node
 *
 * Return: Pointer to last node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nuNode = malloc(sizeof(listint_t));

	if (!nuNode || !head)
		free(nuNode);
	else
	{
		nuNode->n = n;
		nuNode->next = (*head);
		(*head) = nuNode;
	}
	return (nuNode);
}
