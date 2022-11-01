#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers using a separator
 *
 * @separator: The separator character
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list word;

	va_start(word, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(word, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(word);

	printf("\n");
}
