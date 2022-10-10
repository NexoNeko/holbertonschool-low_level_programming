/**
 * _strcat - concatenates two strings
 *
 * @dest: String to be expanded
 * @src: text to be pasted into previous string
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, c, b;
	char *a;

	c = b = 0;
	for (i = 0; dest[i] != '\0'; i++)
		;
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
