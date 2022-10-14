/**
 * factorial - factorizes a number
 *
 * @n: number to factorize
 *
 * Return: int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n > 1)
		return(n * factorial(n - 1));
	else
		return(1);
}
