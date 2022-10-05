#include <stdio.h>
/**
 * main - prints the 50 first nums of the fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;

	long double n, a = 0, b = 1;

	n = a + b;
	for (i = 0; i <= 96; i++)
	{
		printf("%.0Lf, ", n);
		a = b;
		b = n;
		n = a + b;
	}
	printf("%.0Lf\n", n);
	return (0);
}
