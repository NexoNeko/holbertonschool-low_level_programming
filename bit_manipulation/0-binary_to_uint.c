#include "main.h"
/**
 * binary_to_uint - converts a binary value to unsigned int
 *
 * @b: The binary value to convert
 *
 * Return: Decimal value if succesful, 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, base = 1;
	unsigned int dec = 0;

	if (!b)
		return (0);
	while (b[i + 1])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	while (i >= 0)
	{
		dec += (b[i] - 48) * base;
		base *= 2;
		i--;
	}
	return (dec);
}
