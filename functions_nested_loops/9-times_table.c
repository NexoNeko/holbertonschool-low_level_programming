#include "main.h"
/**
 * times_table - prints all the times tables
 *
 * @c: Value to be printed on screen
 *
 * Return: void
 */
int _putchar (char c);
void times_table(void)
{
	int a, b, r;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			r = (a * b);
			if (a == 0 && b != 9 && b != 0)
			{
				_putchar('.');
				_putchar('.');
			}
			if (r == 0 && b != 9)
			{
				_putchar(r + 48);
				_putchar(',');
			}
			else
			{
				if (r <= 9)
				{
					_putchar('.');
					_putchar('.');
					_putchar(r + 48);
				}
				else
				{
					_putchar('.');
					_putchar((r / 10) + 48);
					_putchar((r % 10) + 48);
				}
				if (b != 9)
				{
					_putchar(',');
				}
				else
				{
					_putchar('\n');
				}
			}
		}
	}
}
