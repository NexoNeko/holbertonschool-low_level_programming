/**
 * print_rev - reverses a string and prints it
 *
 * @c: character to be printed
 *
 * Return: void
 */
int _putchar(char c);
void print_rev(char *s)
{
	int i, c;

	c = i = 0;
	for (; s[i] != '\0'; i++)
		c++;
	c -= 1;
	for (; c > -1; c--)
		_putchar(str[c]);
	_putchar('\n');
}
