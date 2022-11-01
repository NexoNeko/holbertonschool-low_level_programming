#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters sent to the function
 *
 * Return: int sum
 */
 int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list holds;

	if (n == 0)
		return (0);

	va_start (holds, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg (holds, int);

	va_end(holds);
	return(sum);
}
