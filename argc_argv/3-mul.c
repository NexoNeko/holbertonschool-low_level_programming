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
	long a = strtol(argv[1], &p, 10);
	long b = strtol(argv[2], &p, 10);

	if (argc > 2)
		printf("%ld\n", a * b);
	else
		printf("Error");
	return (0);
}
