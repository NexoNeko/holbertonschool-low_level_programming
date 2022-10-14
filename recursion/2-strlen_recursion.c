/**
 * _strlen_recursion - Prints the lenght of a string recursively
 *
 * @s: string to count the chars of
 *
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (s[0] > 0 && s[0] <= 126)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
