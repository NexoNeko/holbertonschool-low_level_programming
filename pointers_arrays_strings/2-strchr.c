#define NULL 0
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

	while (s[i++])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
