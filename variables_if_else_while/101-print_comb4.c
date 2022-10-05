#include <stdio.h>
/**
 * main - prints 1 to 999 w/o repeats
 *
 * Return: 0
 */
int main(void)
{
	int i, ten, dig, a, ntn, mul, mod = 0, c = 0;

	for (; c <= 7; c++)
	{
		for (i = 12; i < 100; i++)
		{
			dig = i / 10;
			ten = dig * 10;
			ntn = ten + 10;
			if (i > ten + dig && i < ntn)
			{
				if (c > 0 && i < 22)
					i += 11;
				if (c > 1)
				{
					i = i + mod;
					mod = 0;
				}
				putchar(c + 48);
				a = i / 10 + 48;
				putchar(a);
				putchar((i % 10) + 48);
				if (c == 7 && (i / 10) == 8)
				{
					putchar('\n');
					return (0);
				}
				putchar(',');
				putchar(' ');
			}
		}
		mod = mul;
		mul += 11;
	}
	return (0);
}
