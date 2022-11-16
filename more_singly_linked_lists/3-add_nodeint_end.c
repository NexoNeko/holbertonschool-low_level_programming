#include "lists.h"
/**
 * add_nodeint_end - adds a node to the end of the list
 *
 * @head: Pointer to the list
 * @n: Information to be contained
 *
 * Return: pointer to last node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nuNode = malloc(sizeof(listint_t));
	listint_t *temp;

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
		temp->next = nuNode;
	return (nuNode);
}
