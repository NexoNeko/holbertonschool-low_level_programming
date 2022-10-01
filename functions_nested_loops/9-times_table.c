/**
 * times_table - prints all the times tables
 *
 * @c: Value to be printed on screen
 *
 * Return: void
 */
int _putchar (char c);
void times_table(void)
{
	int a, b, r;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			r = a * b;
			if (r >= 10)
			{
				_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
			}
			else
			{
				_putchar(r + 48);
			}
			if (b == 9)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
			}
			if (r < 10 && b < 9)
			{
				_putchar (' ');
			}
		}
	}
}
