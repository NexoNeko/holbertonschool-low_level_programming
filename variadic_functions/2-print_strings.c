#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints numbers using a separator
 *
 * @separator: The separator character
 * @n: number of integers passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list word;
	char *holdme;

	va_start(word, n);

	for (i = 0; i < n; i++)
	{
		holdme = va_arg(word, char*);
		if (holdme == NULL)
			printf("(nil)");
		else
		printf("%s", holdme);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(word);

	printf("\n");
}
