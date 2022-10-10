/**
 * puts_half - splits a string in half
 *
 * @str: String to be split
 *
 * Return: void
 */
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
			printf("%c", str[i]);
		i++;
	}
	putchar('\n');
}
