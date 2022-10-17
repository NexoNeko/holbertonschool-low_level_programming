/**
 * _islower - checks wether the char is lowercase or not
 *
 *
 * @c: The char to be tested
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
