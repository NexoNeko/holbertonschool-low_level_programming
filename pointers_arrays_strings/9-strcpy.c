/**
 * _strcpy - Copies the contents of a string to another string
 *
 * @src: Characters will be copied FROM this string
 * @dest: Characters will be copied TO this string.
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i, c;
	char *a;

	c = i = 0;
	for (; src[i] != '\0'; i++)
		c++;
	for (i = 0; c > -1; c--)
	{
		dest[i] = src[i];
		i++;
	}
	a = dest;
	return (a);
}
