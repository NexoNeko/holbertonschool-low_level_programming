#include <stdio.h>
/**
 * main - returns how many arguments were passed to the program on call
 *
 * @argc: num of arguments (int)
 * @argv: required but void.
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
