#include <stdio.h>
#include <stdlib.h>
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
	char *p;
	long a, b;

	if (argc == 3)
	{
		a = strtol(argv[1], &p, 10);
		b = strtol(argv[2], &p, 10);
		printf("%ld\n", a * b);
	}
	else
		printf("Error\n");
	return (0);
}
