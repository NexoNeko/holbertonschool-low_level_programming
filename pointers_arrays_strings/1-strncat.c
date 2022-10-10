/**
 * _strncat - concatenates two strings, n size
 *
 * @dest: String to be expanded
 * @src: text to be pasted into previous string
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, c, b;
	char *a;

	c = b = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
	for (c = 0; src[c] != '\0'; c++)
		;
	if (n > c)
		n = c;
	c = 0;
	while (b < n)
	{
		dest[i] = src[c];
		c++;
		i++;
		b++;
	}
	a = dest;
	return (a);
}
