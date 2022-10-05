/**
 * print_numbers - prints from 0 to 9\n.
 *
 * @c: Char to be printed
 *
 * Return: void
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar(a + 48);
		a++;
	}
	_putchar('\n');
}
