/**
 * _memset - fill memory with a constant byte
 *
 * @s: pointer to memory to be filled
 * @b: constant byte/character to fill memory with
 * @n: N of bytes of memory to fill with b
 *
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *c = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (c);
}
