/**
 * _puts - Prints a whole string, w/o \0
 *
 * @str: Input string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
