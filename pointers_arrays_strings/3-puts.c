/**
 * todo
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
