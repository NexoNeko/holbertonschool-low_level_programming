/**
 * print_number - Prints whatever number is provided by n
 *
 * @c: Char to be printed
 *
 * Return: void
 */
int _putchar (char c);
void print_number(int n)
{
	int i, c = 1, m, f, x;

	if (n < 0)
	{
		n /= -1;
		n -= 1;
		x = 1;
		_putchar('-');
	}
	i = n;
	for (; i > 9;)
	{
		i /= 10;
		c += 1;
	}
	while (c > 0)
	{
		m = 1;
		for (f = 1; f != c; f++)
			m *= 10;
		if (c == 1 && x == 1)
			i++;
		_putchar(i + 48);
		n = n - (i * m);
		c -= 1;
		i = n;
		f = 1;
		for (; i > 9;)
		{
			i /= 10;
			f++;
		}
		if (c > f)
		{
			_putchar('0');
			c--;
		}
	}
}
