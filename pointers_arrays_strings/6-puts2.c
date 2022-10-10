/**
 * todo
 *
 * Return: void
 */
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
			printf("%c", str[i]);
		i++;
	}
	putchar('\n');
}
