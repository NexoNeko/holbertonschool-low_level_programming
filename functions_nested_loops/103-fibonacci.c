#include <stdio.h>
/**
 * main - prints the sum of all even numbers w/ less tan 4M in the F. Sequence
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long n, a = 0, b = 1, s;

	n = a + b;
	for (i = 0; i < 32; i++)
	{
		if ((n % 2) == 0)
			s += n;
		a = b;
		b = n;
		n = a + b;
	}
	printf("%lu\n", s);
	return (0);
}
