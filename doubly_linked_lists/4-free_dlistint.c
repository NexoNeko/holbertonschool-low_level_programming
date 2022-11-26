#include "lists.h"
/**
 * free_dlistint - frees a dlist
 *
 * @head: list to free
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
		free_dlistint(head->next);
	free(head);
}
