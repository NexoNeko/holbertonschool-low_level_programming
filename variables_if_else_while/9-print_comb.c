#include <stdio.h>
/**
 * main - Prints 1..9
 *
 * Return: 0
 */
int main(void)
{
	int b = 48, c = 44;

	while (b < 58)
	{
		putchar(b);
		b++;
		while (c >= 32 && b < 58)
		{
			putchar(c);
			c = c - 12;
		}
		c = 44;
	}
	return (0);
}
