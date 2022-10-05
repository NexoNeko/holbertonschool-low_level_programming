/**
 * print_line - prints _ n times
 *
 * @c: Char to be printed
 *
 * Return: void
 */
int _putchar (char c);
void print_line(int n)
{
	int a = 0;

	while (a < n && n > 0)
	{
		putchar('_');
		a++;
	}
	putchar('\n');
}
