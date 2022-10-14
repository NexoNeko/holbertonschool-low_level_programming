/**
 * _puts_recursion - prints a string of chars recursively
 *
 * @c: char to be printed
 *
 * Return: Void
 */
int _putchar(char c);
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] > 31 && s[i] <= 126)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
