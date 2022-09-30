#include "main.h"
/**
 * main - Prints '_putchar'
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char a[10] = "_putchar\n";

	for (i = 0; i < 9; i++)
		_putchar(a[i]);
	return (0);
}
