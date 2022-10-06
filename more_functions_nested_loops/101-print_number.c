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
	int i, c = 1, m, f;

	if (n < 0)
	{
		n /= -1;
		putchar('-');
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
		putchar(i + 48);
		n = n - (i * m);
		c -= 1;
		i = n;
		for (; i > 9;)
			i /= 10;
	}
}
