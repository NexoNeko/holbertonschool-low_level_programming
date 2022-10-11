/**
 * reverse_array - reverses an array of integers
 *
 * @a: array to be reversed
 * @n: size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
