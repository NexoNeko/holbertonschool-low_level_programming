/**
 * _isalpha - checks wether the char is A-Za-z or not
 *
 *
 * @c: The char to be tested
 *
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}
