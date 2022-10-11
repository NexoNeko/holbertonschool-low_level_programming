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
	int i, s1Max, s2Max, n;

	i = s1Max = s2Max = n = 0;
	while (s1[i++])
		;
	while (s2[n++])
		;
	i -= 1;
	n -= 1;

	if (i < n)
		n = i;
	i = 0;

	while (i  < n)
	{
		s1Max += s1[i];
		s2Max += s2[i];
		i++;
	}
	if (s1Max > s2Max)
		return (13);
	else if (s1Max < s2Max)
		return (-13);
	else
		return (0);
}
