#include "main.h"
/**
 * print_alphabetx10 - Prints the alphabet\n x10
 *
 * Return: Character
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		while (a < '{')
		{
			_putchar(a);
			a++;
		}
	_putchar('\n');
	a = 'a';
	}
}
