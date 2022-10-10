/**
 * rev_string - Reverses a string
 *
 * @s: String to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c;
	char temp;

	c = i = 0;
	while (s[i++])
		c++;
	c -= 1;
	for (i = 0; i < (c / 2); i++)
	{
		temp = s[i];
		s[i] = s[c - i];
		s[c - i] = temp;
	}
}
