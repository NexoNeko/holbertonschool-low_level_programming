#include "main.h"
/**
 * get_bit - prints the bit at the given possition
 *
 * @n: Decimal value
 * @index: index of the bit to get
 *
 * Return: bit value if success, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int k = 0;
	unsigned long int temp = n, c = 0;

	if (n == 0)
		putchar('0');
	while (temp != 0)
	{
		temp = temp >> 1;
		c++;
	}
	c--;
	if (index <= c)
	{
		for (; c >= 0; c--)
		{
			k = n >> c;
			if (c == index)
				if (k & 1)
					return (1);
				else
					return (0);
		}
	}
	else
		return (-1);
}
