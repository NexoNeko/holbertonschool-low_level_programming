#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - handles part of the calculus between two numbers
 *
 * @argc: Num of chars sent as an arg
 * @argv: arguments
 *
 * Return: a + b
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *sgn;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sgn = argv[2];

	if ((*sgn == '/' || *sgn == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}

	op = get_op_func(sgn);

	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(a, b));

	return (0);
}
