#define NULL 0
/**
 * _strspn - counts occurrences of character within first segment of string
 *
 * @s: String to lok for characters
 * @accept: character to look for
 *
 * Return: unsigned int, number of characters, a
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, n = 0;
	unsigned int a = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (n = 0; s[n] != 32 && s[n] != '\0'; n++)
		{
			if (s[n] == accept[i])
				a++;
		}
	}
	return (a);
}
