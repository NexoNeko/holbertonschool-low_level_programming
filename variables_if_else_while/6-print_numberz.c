#include <stdio.h>
/**
 * main - Prints 1..9
 *
 * Return: 0
 */
int main(void)
{
	int a = 0, b = 48;

	while (a < 10)
	{
		putchar(b);
		a++;
		b++;
	}
	putchar('\n');
	return (0);
}
