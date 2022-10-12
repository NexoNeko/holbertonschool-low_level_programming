#define NULL 0
/**
 * _strpbrk - finds the first char in s1 that matches any character from s2
 *
 * @s: String to lok for characters
 * @accept: character to look for
 *
 * Return: pointer to string index if found, NULL otherwise
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, n = 0;

	while (s[n++])
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[n] == accept[i])
			{
				return (s + n);
			}
		}
	}
	return (NULL);
}
