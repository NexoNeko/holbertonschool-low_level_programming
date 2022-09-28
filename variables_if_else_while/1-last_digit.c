#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Compares wether rand numb equals 0, >5 or <6!=0
 *
 * Return: 0
 */
int main(void)
{
	int n, lst;
	char s[31];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lst = n % 10;

	if (lst > 5)
	{
		strcpy(s, "and is greater than 5\n");
	}
	else if (lst == 0)
	{
		strcpy(s, "and is 0\n");
	}
	else
	{
		strcpy(s, "and is less than 6 and not 0\n");
	}

	printf("The last digit of %d is %d %s", n, lst, s);
	return (0);
}
