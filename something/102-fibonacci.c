#include <stdio.h>
/**
 * main - prints the 50 first nums of the fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long n, a = 0, b = 1;

	n = a + b;
	for (i = 0; i < 49; i++)
	{
		printf("%lu, ", n);
		a = b;
		b = n;
		n = a + b;
	}
	printf("%lu\n", n);
	return (0);
}
