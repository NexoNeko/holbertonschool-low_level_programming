#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a < '{')
	{
		putchar(a);
		a++;
		if (a == 'q')
		{
			a++;
		}
		if (a == 'e')
		{
			a++;
		}
	}
	putchar('\n');
	return (0);
}
