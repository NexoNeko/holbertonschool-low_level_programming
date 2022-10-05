/**
 * print_square - prints a square of size size.
 *
 * @c: Char to be printed
 *
 * Return: void
 */
int _putchar (char c);
void print_square(int size)
{
	int a = 0, s;

	s = size;
	while (s > 0)
	{
	while (a < size && size > 0)
	{
		_putchar('#');
		a++;
	}
	_putchar('\n');
	s--;
	a = 0;
	}
	if (size <= 0)
	_putchar('\n');
}
