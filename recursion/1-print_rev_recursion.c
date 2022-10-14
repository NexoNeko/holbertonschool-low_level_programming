/**
 * _print_rev_recursion - prints a string of chars in reverse, recursively.
 *
 * @c: char to be printed
 *
 * Return: Void
 */
int _putchar(char c);
void _print_rev_recursion(char *s)
{
	if (s[0] > 0 && s[0] <= 126)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
