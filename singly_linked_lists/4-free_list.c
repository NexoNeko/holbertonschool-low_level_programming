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
	if (head)
	{
		list_t *temp = head;
		list_t *next = NULL;

		while (temp || next)
		{
			next = temp->next;
			if (temp->str)
				free(temp->str);
			free(temp);
			temp = next;
		}
	}
}
