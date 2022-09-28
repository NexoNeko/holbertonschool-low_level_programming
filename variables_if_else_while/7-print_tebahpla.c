#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	char a = 'z';

	while (a > '`')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
