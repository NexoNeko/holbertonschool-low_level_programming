#define NULL 0
/**
 * _strstr - finds a specific char sequence within a string
 *
 * @haystack: string containing desired character sequence
 * @needle: desired character sequence to look for
 *
 * Return: haystack + i || needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, n = 1;

	if (needle == "")
		return (haystack);
	while (haystack[i])
	{
		while (needle[n] > 0 && haystack[i] == needle[0])
		{
			if (haystack[i + n] == needle[n])
				n++;
				else
					break;
		}
		if (needle[n])
		{
			i++;
			n = 1;
		}
		else
			return (haystack + i);
	}
	return (NULL);
}
