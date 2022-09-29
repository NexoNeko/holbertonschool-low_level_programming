#include <stdio.h>
/**
 * main - prints every combination of two digits from 1 to 99 without repeats.
 *
 * Return: 0
 */
int main(void)
{
	int a = 48, b = 48, c;

	while (b < 58)
	{
		putchar(a);
		putchar(b);
		c = 44;
		while (c >= 32)
		{
			putchar(c);
			c = c - 12;
		}
		if (a == b && a < 57)
		{
			b++;
		}
		if (b >= 57 && a < b)
		{
			b = b - 9;
			a++;
		}
		else
		{
			b++;
		}
	}
	return (0);
}
