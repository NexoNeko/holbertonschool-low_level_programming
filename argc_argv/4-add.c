#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies a * b;
 *
 * @argc: num of arguments (int)
 * @argv: arguments (array of *)
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	char *p = NULL;
	int i = 1;
	long a, b;

	a = b = 0;
	if (argc > 2)
	{
		while(i < argc)
		{
			a = strtol(argv[i], &p, 10);
			b += a;
			i++;
		}
	}
	else if (argc == 2)
		b = strtol(*argv, &p, 10);
	else
	{
		printf("0\n");
		return (0);
	}

	if (*p > 32 && *p <= 126)
	{
		printf("Error\n");
		return (1);
	}
	printf("%ld\n", b);
	return (0);
}
