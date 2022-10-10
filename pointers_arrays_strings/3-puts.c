/**
 * _puts - Prints a whole string, w/o \0
 *
 * @c: character to be printed
 *
 * Return: void
 */
int _putchar(char c);
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
