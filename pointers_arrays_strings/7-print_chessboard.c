/**
 * print_chessboard - prints the chessboard pieces initial possition
 *
 * @a: two dimensional array containing the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, c, d;

	i = c = d = 0;
	while (d < 1)
	{
		while (c < 8)
		{
			while (i < 8)
			{
				printf("%c", a[c][i]);
				if (i == 7 || c > 1 && c < 2)
					putchar('\n');
				i++;
			}
			i = 0;
			c++;
		}
		c = 0;
		d++;
	}
}
