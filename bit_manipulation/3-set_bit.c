#include "main.h"
/**
 * set_bit - flips the bit at index
 *
 * @n: decimal to convert
 * @index: index of bit to flip
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp, c = 0;

	if (n == NULL)
		return (-1);

	temp = 1 << index;
	*n |= temp;
	return (1);
}