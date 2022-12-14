#include <stdio.h>
/**
 * print_array - Prints N elements of an array of integers
 *
 * @a: The array to be printed
 * @n: The number of integers to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, m;

	m = n;
	n -= 1;
	if (n < 1)
		printf("\n");
	else
	for (i = 0; n > -1; n--)
	{
		printf("%d", a[i]);
		i++;
		if (i < m)
			printf(", ");
		else
			putchar('\n');
	}
}
