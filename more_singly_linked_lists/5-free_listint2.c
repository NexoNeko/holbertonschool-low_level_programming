#include "lists.h"
/**
 * free_listint2 - frees a list and sets the head to null
 *
 * @head: list to free;
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	if (head)
	{
		listint_t *temp = *head;
		listint_t *next = NULL;

		while (temp || next)
		{
			next = temp->next;
			free(temp);
			temp = next;
		}
		*head = NULL;
	}
}
