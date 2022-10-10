/**
 * _strcmp - compares two strings
 *
 * @s1: String1
 * @s2: String2
 *
 * Return: i
 */
int _strcmp(char *s1, char *s2)
{
	int i, c, r;

	i = r = c = 0;
	while (i < 10)
	{
		if (s1[i] < s2[i])
			c++;
		else if (s1[i] > s2[i])
			r++;
		else
			;
		i++;
	}
	i = (((c * 10) - (r * 10)) / 2);
	return (i);
}
