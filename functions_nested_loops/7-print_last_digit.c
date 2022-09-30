#include "main.h"
/**
 * print_last_digit - returns last digit of an integer
 *
 *
 * @i: The num to be cut
 *
 * Return: void
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i /= -1;
	_putchar('0' + i);
	return (0 + i);
}
