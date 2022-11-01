#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * prInt - prints an integer value
 *
 * @aValue: Value to print
 */
void prInt(va_list aValue)
{
	printf("%d", va_arg(aValue, int));
}

/**
 * prChr - prints a char
 *
 * @aValue: Value to print
 */
void prChr(va_list aValue)
{
	printf("%c", va_arg(aValue, int));
}


/**
 * prStr - prints an string
 *
 * @aValue: Value to print
 */
void prStr(va_list aValue)
{
	char *s;

	s = va_arg(aValue, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * prFlt - prints a float value
 *
 * @aValue: Value to print
 */
void prFlt(va_list aValue)
{
	printf("%f", va_arg(aValue, double));
}

/**
 * print_all - prints any value given to the program
 *
 * @format: value to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int i, n;
	va_list args;
	char *sep;

	frmt typez[] = {
		{ "i", prInt },
		{ "c", prChr },
		{ "s", prStr },
		{ "f", prFlt },
		{NULL, NULL}
	};

	i = n = 0;
	sep = "";
	va_start(args, format);

	while (format !=  NULL && format[i] != '\0')
	{
		n = 0;
		while (typez[n].type != NULL)
		{
			if (format[i] == (*typez[n].type))
			{
				printf("%s", sep);
				typez[n].f(args);
				sep = ", ";
			}
			n++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
