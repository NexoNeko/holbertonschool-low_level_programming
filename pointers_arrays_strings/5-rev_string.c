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
	for (i = 0; i < (c / 2); i++)
	{
		temp = s[i];
		s[i] = s[c - i - 1];
		s[c - i - 1] = temp;
	}
}
