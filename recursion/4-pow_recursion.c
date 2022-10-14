/**
 * _pow_recursion - prints x to the power of y
 *
 * @x: Base of the logarithm
 * @y: exponent
 *
 * Return: x to the power of y, -1 if error
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
