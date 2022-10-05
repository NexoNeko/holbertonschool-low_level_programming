/**
 * print_most_numbers - Prints 0..9\n w/o 2&4
 *
 * @c: Char to be printed
 *
 * Return: void
 */
int _putchar (char c);
void print_most_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		if (a == 2 || a == 4)
			a++;
		_putchar(a + 48);
		a++;
	}
	_putchar('\n');
}
