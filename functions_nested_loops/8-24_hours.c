/**
 * jack_bauer - Prints all numbers from 00:00 to 23:59
 *
 *@c: Value to be printed on screen
 *
 * Return: 0
 */
int _putchar (char c);
void jack_bauer(void)
{
	int h, m, d, s;

	for (h = 0; h <= 2; h++)
	{
		for (m = 0; m <= 3; m++)
		{
			for (d = 0; d <= 5; d++)
			{
				for (s = 0; s <= 9; s++)
				{
					_putchar(h + 48);
					_putchar(m + 48);
					_putchar(':');
					_putchar(d + 48);
					_putchar(s + 48);
					_putchar('\n');
				}
			}
		}
	}
}
