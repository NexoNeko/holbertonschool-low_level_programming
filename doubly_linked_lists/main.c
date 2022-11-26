#include "lists.h"

/**
 * _free_dlist - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void _free_dlist(dlistint_t *head)
{
	if (head)
	{
		_free_dlist(head->next);
		free(head);
	}
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	dlistint_t *head;
	int ints[2] = {
		0,
		9
	};
	dlistint_t *ptr;
	int i;
	size_t n;

	head = NULL;
	for (i = 0; i < 2; ++i)
	{
		ptr = add_dnodeint(&head, ints[i]);
		if (!ptr)
		{
			printf("Failed\n");
			_free_dlist(head);
			return (1);
		}
	}
	n = print_dlistint(head);
	printf("-> %lu elements\n", n);
	n = _print_dlistint_backward(head);
	printf("-> %lu elements\n", n);
	_free_dlist(head);
	return (0);
}
