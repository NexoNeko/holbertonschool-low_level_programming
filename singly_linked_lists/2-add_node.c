#include "lists.h"
/**
 * add_node - pushes a new node into the list
 *
 * @head: the list to push the node into
 * @str: string to be contained by the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nuNode = (list_t *) malloc(sizeof(list_t));

	if (!nuNode || !head)
		free(nuNode);
	else
	{
		nuNode->str = strdup(str);
		nuNode->next = (*head);
		nuNode->len = strlen(str);
		(*head) = nuNode;
	}
	return (nuNode);
}
