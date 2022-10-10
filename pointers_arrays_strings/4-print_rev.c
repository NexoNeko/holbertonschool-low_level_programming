/**
 * print_rev - reverses a string and prints it
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, c;

	c = i = 0;
	for (; s[i] != '\0'; i++)
		c++;
	c -= 1;
	for (; c > -1; c--)
		putchar(str[c]);
	putchar('\n');
}
