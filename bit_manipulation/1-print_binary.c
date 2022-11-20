#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal
 *
 * @n: decimal to convert
 *
 */
void print_binary(unsigned long int n)
{
	int c = 0, k = 0;
	unsigned long int temp = n;

	if (n == 0)
		putchar('0');
	while (temp != 0)
	{
		temp = temp >> 1;
		c++;
	}
	for (c--; c >= 0; c--)
	{
		k = n >> c;
		if (k & 1)
			putchar('1');
		else
			putchar('0');
	}
}
