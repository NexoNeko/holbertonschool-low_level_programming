/**
 * todo
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i, m;

	m = n;
	n -= 1;
	for (i = 0; n > -1; n--)
	{
		printf("%d", a[i]);
		i++;
		if (i < m)
			printf(", ");
		else
			putchar('\n');
	}
}
