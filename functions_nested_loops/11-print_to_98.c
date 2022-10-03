#include <stdio.h>
/**
 * print_to_98 - prints from a to 98 \n.
 *
 * @c: Value to be printed on screen
 *
 * Return: void
 */
int _putchar (char c);
void print_to_98(int a)
{
	while (a != 98)
	{
		for (; a > 98; a--)
			printf("%d, ", a);
		for (; a < 98; a++)
			printf("%d, ", a);
	}
	printf("98\n");
}
