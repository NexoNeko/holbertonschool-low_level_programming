#include <stdio.h>
/**
 * print_diagsums - sums diagonal values on an array and prints the result
 *
 * @a: Array containing the values
 * @size: Size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, reslt, reslt2, R;

	i = reslt = R = 0;
	R = size;
	reslt += a[i];
	while (i < (R - 1))
	{
		reslt += a[size + i + 1];
		size += R;
		i++;
	}
	i = reslt2 = 0;
	size = R;
	while (i < R)
	{
		reslt2 += a[size - i - 1];
		size += R;
		i++;
	}
	printf("%d, %d\n", reslt, reslt2);
}
