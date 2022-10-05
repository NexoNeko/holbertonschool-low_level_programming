/**
 * print_number - prints int n
 *
 * @c: Char to be printed
 *
 * Return: void
 */
int _putchar (char c);
void print_number(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n /= -1;
		_putchar('-');
	}
	if (n > 999)
	{
		i = (((n / 10) / 10) / 10);
		_putchar(i + 48);
		i *= 1000;
		_putchar((((n - i) / 10) / 10) + 48);
		i = (i / 1000) * 100;
		_putchar((((n - i) / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n > 99)
	{
		i = (((n / 10) / 10));
		_putchar(i + 48);
		i *= 100;
		_putchar(((n - i) / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n > 9)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else
		_putchar(n + 48);
}
