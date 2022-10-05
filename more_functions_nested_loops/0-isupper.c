/**
 * _isupper - checks wether the char is uppercase or not
 *
 *
 * @c: The char to be tested
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
