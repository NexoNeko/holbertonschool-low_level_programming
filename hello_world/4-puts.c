#include <stdio.h>
#include <string.h>
/**
 * main - prints a string using puts
 *
 *@str: the character array (string) to be printed.
 */
int main (void)
{
	char str[52];

	strcpy(str, "\"Programming is like building a multilingual puzzle");

	puts(str);

	return(0);
}
