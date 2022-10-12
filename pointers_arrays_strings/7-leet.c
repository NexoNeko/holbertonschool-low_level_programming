/**
 * leet - 1337H4xx0rz ur txt
 *
 * @x: txt 2 b cnvrtd
 *
 * Return: awesomesauce
 */
char *leet(char *x)
{
	char w[13] = {65, 69, 79, 84, 76, 97, 101, 111, 116, 108};
	char h[13] = {52, 51, 48, 55, 49, 52, 51, 48, 55, 49};
	int i, n;

	for (i = 0; w[i] != '\0'; i++)
	{
		for (n = 0; x[n] != '\0'; n++)
		{
			if (x[n] == w[i])
				x[n] = h[i];
		}
		n = 0;
	}
	return (x);
}
