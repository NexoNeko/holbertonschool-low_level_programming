#include <stdio.h>
/**
 * main - returns the program name
 *
 * @argc: num of arguments (int)
 * @argv: arguments (array of *)
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	argc = argc + 1;
	printf("%s\n", argv[0]);
	return (0);
}
