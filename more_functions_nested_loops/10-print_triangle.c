/**
 * print_triangle - prints a triangle of size size
 *
 * @c: Char to be printed
 *
 * Return: void
 */
int _putchar (char c);
void print_triangle(int size)
{
	int a, s;

	s = size;
	a = 0;
	while (s > 0)
	{
		while (a < s)
		{
			if ((s - 1) == a)
				;
			else
				_putchar(' ');
			a++;
		}
		while (a >= s && a <= size)
		{
			_putchar('#');
			a++;
		}
		_putchar('\n');
		a = 0;
		s--;
		}
	if (size <= 0)
		_putchar('\n');
}
