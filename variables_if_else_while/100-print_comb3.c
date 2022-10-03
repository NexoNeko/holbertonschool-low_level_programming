#include <stdio.h>
/**
 * main - prints every combination of two digits from 1 to 99 without repeats.
 *
 * Return: 0
 */
int main(void)
{
	int i, ten, dig, a, ntn;

	for (i = 1; i < 100; i++)
	{
		dig = i / 10;
		ten = dig * 10;
		ntn = ten + 10;

		if (i > ten + dig && i < ntn)
		{
			a = i / 10 + 48;
			putchar(a);
			a = i % 10 + 48;
			putchar(a);
			if ((i / 10) == 8)
			{
				putchar('\n');
				return(0);
			}
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
