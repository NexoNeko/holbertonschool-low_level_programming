#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	listint_t *head;
	int n;

	head = NULL;
	n = pop_listint(&head);
	printf("-> %d\n", n);
	return (0);
}
