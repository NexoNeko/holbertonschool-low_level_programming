/**
 * _isdigit - checks wether the char is uppercase or not
 *
 *
 * @c: The char to be tested
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
