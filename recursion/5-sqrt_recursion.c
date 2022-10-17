/**
 * calcSqrt - Calculates the prime square root of a number recursively
 *
 * @i: Modifier
 * @c: Number to calc Sqrt of
 *
 * Return: Sqrt of c, or -1 if invalid
 */
int calcSqrt(int i, int c)
{
	if (i * i == c)
		return (i);
	if (i * i > c)
		return (-1);
	return (calcSqrt(i + 1, c));
}
/**
 * _sqrt_recursion - calls calcSqrt, recieving only 1 parameter for commodity.
 *
 * @n: Number to get sqrt of
 *
 * Return: Sqrt of a number
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (calcSqrt(1, n));
}
