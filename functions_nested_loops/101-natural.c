#include <stdio.h>
/**
 * main - sums all n%3 n%5 == 0 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, T = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
			T += i;
		else if ((i % 5) == 0)
			T += i;
	}
	printf("%d\n", T);
	return (0);
}
