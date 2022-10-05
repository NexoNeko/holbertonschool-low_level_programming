#include <stdio.h>
/**
 * print_numbers - prints from 0 to 9\n.
 *
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a != 9)
	{
		putchar(a + 48);
		a++;
	}
	printf("%d\n", a);
}
