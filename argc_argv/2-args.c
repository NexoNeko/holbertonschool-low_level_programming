#include <stdio.h>
/**
 * main - prints all arguments passed to the program
 *
 * @argc: num of arguments (int)
 * @argv: arguments (array of *)
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i = -1;

	while (i++ < (argc - 1))
		printf("%s\n", argv[i]);
	return (0);
}
