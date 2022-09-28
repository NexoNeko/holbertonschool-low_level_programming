#include <stdio.h>
/**
 * main - Prints the alphabet
 *
 */
int main(void)
{
	char a = 'a';

	while (a < 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
}
