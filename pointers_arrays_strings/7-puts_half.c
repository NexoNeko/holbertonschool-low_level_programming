/**
 * puts_half - splits a string in half
 *
 * @c: char to be printed
 *
 * Return: void
 */
int _putchar(char c);
void puts_half(char *str)
{
	int i, c;

	c = i = 0;
	for (; str[i] != '\0'; i++)
		c++;
	c -= 1;
	if ((c % 2))
		c = (c - 1) / 2;
	for (i = (c + 1); c > -1; c--)
	{
		if (str[i] != '\0')
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
