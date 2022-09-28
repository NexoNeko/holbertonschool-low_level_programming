#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * main - checks wether a rnd is possitive or negative
 *
 * Return: zero
 */
main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
