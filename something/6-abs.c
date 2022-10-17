#include "main.h"
/**
 * _abs - Prints the absolute val of an integer
 *
 *
 * @i: The num to be converted
 *
 * Return: n
 */
int _abs(int i)
{
	if (i < 0)
	{
		i /= -1;
		return (i);
	}
	else
		return (i);
}
