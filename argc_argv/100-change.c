#include <stdio.h>
#include <stdlib.h>
/**
 * main - calculates the change for you.
 *
 * @argc: num of arguments
 * @argv: arguments (array of *)
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int valor, cambio, i;
	int valC[5] = {25, 10, 5, 2, 1};

	i = cambio = 0;
	if (argc == 2)
	{
		valor = atoi(argv[1]);
		while (valor > 0)
		{
			while (valC[i] <= valor)
			{
				valor -= valC[i];
				cambio++;
			}
			i++;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", cambio);
	return (0);
}
