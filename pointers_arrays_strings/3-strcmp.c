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
	int i, c, r, l;

	i = r = c = 0;
	while (s1[c++])
		;
	while (s2[r++])
		;
	if (c < r)
		l = c;
	else
		l = r;
	i = r = c = 0;
	while (i < l)
	{
		if (s1[i] < s2[i])
			c++;
		else if (s1[i] > s2[i])
			r++;
		i++;
	}
	i = (r - c);
	return (i);
}
