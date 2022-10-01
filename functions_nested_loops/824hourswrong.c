#include "main.h"
/**
 * betty wants this in less than 40 lines so i had to rewrite it
 *
 * Im still keeping this one in here though cause it jus uses less
 * variables to accomplish the same thing.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, m;

	for (i = 0; i < 24; i++)
	{
		if (i < 10)
		{
			for (m = 0; m <= 59; m++)
			{
				if (m < 10)
				{
					_putchar('0');
					_putchar(i + 48);
					_putchar(':');
					_putchar('0');
					_putchar(m + 48);
					_putchar('\n');
				}
				else
				{
					_putchar('0');
					_putchar(i + 48);
					_putchar(':');
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
					_putchar('\n');
				}
			}
		}
		else
		{
				for (m = 0; m <= 59; m++)
			{
				if (m < 10)
				{
					_putchar((i / 10) + 48);
					_putchar((i % 10) + 48);
					_putchar(':');
					_putchar('0');
					_putchar(m + 48);
					_putchar('\n');
				}
				else
				{
					_putchar((i / 10) + 48);
					_putchar((i % 10) + 48);
					_putchar(':');
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
					_putchar('\n');
				}
			}
		}
	}
	return (0);
}
