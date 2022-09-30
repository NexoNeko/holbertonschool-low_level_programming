#include "putchar.c"
/**
 * print_alphabet - Prints the alphabet
 *
 * Return: Character
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a < '{')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
