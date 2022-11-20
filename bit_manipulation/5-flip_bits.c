#include "main.h"
/**
 * flip_bits - counts the num of bits youd need to flip to get from n to i
 *
 * @n: num that will be flipped
 * @m: Desired number
 *
 * Return: num of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m = m >> 1;
		n = n >> 1;
	}
	return (count);
}
