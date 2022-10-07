/**
 * todo
 *
 * Return: void
 */
void _puts(char *str)
{
	int i, c;

	c = i = 0;
	for (; str[i] != '\0'; i++)
		c++;
	c -= 1;
	for (; c > -1; c--)
		putchar(str[c]);
	putchar('\n');
}
