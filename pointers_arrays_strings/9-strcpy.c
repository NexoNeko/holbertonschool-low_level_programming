/**
 * todo
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i, c, *a;

	c = i = 0;
	for (; src[i] != '\0'; i++)
		c++;
	for (i = 0; c > -1; c--)
	{
		dest[i] = src[i];
		i++;
	}
	a = dest;
	return(a);
}
