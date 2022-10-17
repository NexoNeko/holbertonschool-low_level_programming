/**
 * print_aphabet - Prints the alphabet
 *
 * @c - input for putchar
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
