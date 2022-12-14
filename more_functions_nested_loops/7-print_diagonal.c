/**
 * print_diagonal - prints a diagonal of n size
 *
 * @c: Char to be printed
 *
 * Return: void
 */
int _putchar (char c);
void print_diagonal(int n)
{
	int a = 0, s = 0;

	while (a < n && n > 0)
	{
		while (s != a)
		{
			_putchar(' ');
			s--;
		}
		_putchar('\\');
		a++;
		s = (a * 2);
		if (a == n)
			;
		else
		_putchar('\n');
	}
	_putchar('\n');
}
