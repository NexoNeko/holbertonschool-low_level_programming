/**
 * puts2 - prints every other character, starting from the first
 *
 * @c: char printed
 *
 * Return: void
 */
int _putchar(char c);
void puts2(char *str)
{
	int i, c;

	c = i = 0;
	for (; str[i] != '\0'; i++)
		c++;
	c -= 1;
	for (i = 0; c > -1; c--)
	{
		if ((c % 2) == 1)
			_putchar(str[i])
		i++;
	}
	_putchar('\n');
}
