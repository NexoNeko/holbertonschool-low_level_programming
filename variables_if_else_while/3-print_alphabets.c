#include <stdio.h>
/**
 * main - Prints a..z; A..Z
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
	}
	a = 'A';
	while (a < '[')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
