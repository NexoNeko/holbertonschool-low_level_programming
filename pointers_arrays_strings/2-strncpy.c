/**
 * _strncpy - copies n chars from src to dest
 *
 * @dest: String to be expanded
 * @src: text to be pasted into previous string
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, c;
	char *a;

	i = c = 0;
	while (src[c++])
		;
	while (i < n)
	{
		if (i < c)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	a = dest;
	return (a);
}
