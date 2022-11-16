#include "lists.h"
/**
 * pop_listint - deletes the head node and returns the val it used to hold
 *
 * @head: list to perform operation on
 *
 * Return: Value of popped head
 */
int pop_listint(listint_t **head)
{
	int val = 0;

	if (head)
	{
		listint_t *temp = *head;
		listint_t *next = NULL;

		next = temp->next;
		val = temp->n;
		free(temp);
		*head = next;
	}
	return (val);
}
