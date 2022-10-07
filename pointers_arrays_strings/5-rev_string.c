/**
 * todo
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, c, *a;

	c = i = 0;
	for (; s[i] != '\0'; i++)
		c++;
	c -= 1;
	for (i = 0; c > -1; c--)
	{
		a[i] = s[c];
		i++;
	}
	for (i = 0; s[i] != '\0'; i++)
		s[i] = a[i];
}
