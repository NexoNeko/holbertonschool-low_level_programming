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
	unsigned long int temp, c = 0;

	if (n == 0)
		return (0);
	while (temp != 0)
	{
		temp = temp >> 1;
		c++;
	}
	if (index <= c)
	{
		temp = (n >> index) & 1;
		if ((temp == 1) || (temp == 0))
			return (temp);
		else
			return (-1);
	}
	else
		return (-1);
}
