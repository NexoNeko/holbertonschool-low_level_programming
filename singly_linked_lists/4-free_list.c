#include "lists.h"
/**
 * free_list - frees a list
 *
 * @head: list to free;
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *next = temp->next;

	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
