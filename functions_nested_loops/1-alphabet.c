/**
 * print_alphabet - Prints the alphabet
 *
 * _putchar - prints a character to stdout
 *
 *@c: the character to be printed
 *
 * Return: Character
 */

int _putchar(char c);

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
