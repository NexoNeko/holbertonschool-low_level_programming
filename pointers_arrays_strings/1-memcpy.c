/**
 * _memcpy - copy n bytes from memory address 1 to memory address 2
 *
 * @dest: The destiny memory address for the new bytes
 * @src: Source address, where to get the bytes from
 * @n: The num of bytes to copy.
 *
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *c = dest;

	while (i < n)
	{
		*dest++ = *src++;
		i++;
	}
	return (c);
}
