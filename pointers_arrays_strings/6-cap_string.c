/**
 * puts2 - prints every other character, starting from the first
 *
 * @c: char printed
 *
 * Return: void
 */
char *cap_string(char *p)
{
	char c[14] = {9, 10, 32, 33, 34, 40, 41, 44, 59, 46, 63, 123, 125};
	int i, n;

	i = n = 0;
	for (n = 0; p[n] != '\0'; n++)
	{
		i = 0;
		for(; c[i] != '\0'; )
		{
			if (p[n] == c[i])
			{
				n++;
				if (p[n] < 96)
				{
					n++;
					if (p[n] > 96 && p[n] < 123)
						p[n] -= 32;
				}
				else if (p[n] > 96 && p[n] < 123)
					p[n] -= 32;
			}
			i++;
		}
	}
	return (p);
}
