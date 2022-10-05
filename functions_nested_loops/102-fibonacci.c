#include <stdio.h>
/**
 * fibonacci - prints the 50 first nums of the fibonacci sequence
 *
 * Return: 0 or 1
 */
int main(void)
{
	int i, a = 0, b = 1, n;

	n = a + b;
	for (i = 0; i < 50; i++)
	{
		printf("%ld, ", n);
		a = b;
		b = n;
		n = a + b;
	}
	printf("%ld\n", n);
}
