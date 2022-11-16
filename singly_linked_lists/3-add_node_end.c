#include "lists.h"
/**
 * add_node_end - adds a node to the end of the list
 *
 * @head: Pointer to the list
 * @str: Information to be contained
 *
 * Return: pointer to last node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuNode = (list_t *) malloc(sizeof(list_t));
	list_t *temp;

	temp = *head;
	if (*head)
		while (temp->next != NULL)
			temp = temp->next;
	if (!nuNode)
		free(nuNode);
	else
	{
		nuNode->str = strdup(str);
		nuNode->next = NULL;
		nuNode->len = strlen(str);
	}
	if (!temp)
		*head = nuNode;
	else
		temp->next = nuNode;
	return (nuNode);
}
