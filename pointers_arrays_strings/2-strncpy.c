/**
 * _strncopy - copies n chars from src to dest
 *
 * @dest: String to be expanded
 * @src: text to be pasted into previous string
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *a;

	i = 0;
	while (dest[i++])
		;
	if (n > i)
		n = i;
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	a = dest;
	return (a);
}
