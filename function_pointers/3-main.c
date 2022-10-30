#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
	int i;
	int a, b;
	char *sgn;
	int (*op)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	sgn = argv[2];

	op = get_op_func(sgn);
	if (op == NULL)
	{
		printf("Error");
		return (-1);
	}

	printf("%d\n", op(a, b));

	return (0);
}
