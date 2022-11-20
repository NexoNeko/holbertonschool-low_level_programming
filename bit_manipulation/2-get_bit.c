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
	unsigned int ret;

	ret = (n >> index) & 1;

	if ((ret == 1) || (ret == 0))
		return (ret);
	else
		return (-1);
}
