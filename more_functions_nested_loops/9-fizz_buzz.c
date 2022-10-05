#include <stdio.h>
/**
 * main - prints 1..100 replacing %3=0, %5=0 && %3&%5=0 with strings
 *
 * Return: void
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", a);
		if (a != 100)
			putchar(' ');
		a++;
	}
	putchar('\n');
	return (0);
}
