/**
 * string_toupper - lowercase to uppercase
 *
 * @p: String to be converted
 *
 * Return: p
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] > 96 && p[i] < 123)
		{
			p[i] -= 32;
		}
	}
	return (p);
}
