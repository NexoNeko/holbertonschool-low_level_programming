/**
 * _strchr - finds a character in a string
 *
 * @s: String where we look for the character
 * @c: character to look for
 *
 * Return: pointer to character or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
