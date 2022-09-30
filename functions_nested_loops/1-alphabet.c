/**
 * print_aphabet - Prints the alphabet
 *
 * _putchar - prints a character to stdout
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
