#include <stdio.h>
/**
 * main - Prints the hex chars
 *
 * Return: 0
 */
int main(void)
{
	char a = 'a';
	int b = 48;

	while (b < 58)
	{
		putchar(b);
		b++;
	}
	while (a < 'g')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
