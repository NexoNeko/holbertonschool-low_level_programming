#include "main.h"
/**
 * more_numbers - prints from 0 to 14\n.
 *
 * Return: void
 */
void more_numbers(void)
{
	int a = 0, b = 0;

	while (b < 10)
	{
		while (a != 15)
		{
			if (a >= 10)
				_putchar((a / 10) + 48);
			_putchar((a % 10) + 48);
			a++;
		}
		_putchar('\n');
		b++;
		a = 0;
	}
}
