#include "lists.h"
/**
 * free_listint - frees a list
 *
 * @head: list to free;
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		listint_t *temp = head;
		listint_t *next = NULL;

		while (temp || next)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
	}
}
