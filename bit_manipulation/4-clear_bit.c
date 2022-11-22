#include "main.h"
/**
 * clear_bit - sets the bit to 0 at given index
 *
 * @n: decimal to convert
 * @index: index of bit to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp, c = 0;

	if (n == NULL)
		return (-1);

	temp = *n;
	if (index > 64)
		return (-1);

	temp = 1 << index;
	if ((temp | *n) == *n)
		*n = *n ^ temp;
	return (1);
}
