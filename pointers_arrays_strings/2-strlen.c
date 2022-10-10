/**
 * _strlen - Returns lenght of a string
 *
 * @s: String to be evaluated
 *
 * Return: i
 */
int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}
