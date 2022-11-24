#include "main.h"
/**
 * main - entry point for the program
 *
 * @argc: Num of arguments
 * @argv: Name of the files to copy
 *
 * Return: 1 on success, error on failure
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		errz(97, NULL);
	else
		create_file(argv[1], argv[2]);
	return (0);
}


/**
 * create_file - creates a file with rw permissions
 *
 * @toFi: the file name to create
 * @fromFi: the file to read from
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *fromFi, char *toFi)
{
	int newzFlz, writz, i, j;
	char *bufz = NULL;
	FILE *oleFlz = fopen(fromFi, "r");

	i = j = 0;
	if (!oleFlz)
	{
		while (fromFi[i++])
			bufz[i] = fromFi[i];
		errz(98, bufz); /** error 98 */
	}

	newzFlz = creat(toFi, 0664);
	if (newzFlz == -1)
		errz(99, toFi); /** error 99 */

	bufz = malloc(sizeof(char) * 1024);
	if (!bufz)
		errz(100, NULL); /** error 100 */

	while (bufz[i] != EOF)
	{
		while ((j = fgetc(oleFlz)) != EOF && i <= 1024)
		{
			bufz[i] = (char) j;
			i++;
		}
		writz = write(newzFlz, bufz, i);
		if (writz == -1)
		{
			close(oleFlz);
			free(bufz);
			errz(99, toFi); /** error 99 */
		}
		i = 0;
		bufz[i] = (char) j;
	}
	return (0);
}

/**
 * errz - handles error messages
 *
 * @errCod: Error code
 * @msg: Extra info to print
 */
void errz(int errCod, char *msg)
{
	switch (errCod)
	{
	case 97:
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(2, "Error: Can't read from file %s\n", msg);
		exit(98);
	case 99:
		dprintf(2, "Error: Can't write to %s\n", msg);
		exit(99);
	case 100:
		dprintf(2, "Error assigning memory to heap");
		exit(100);
	default:
		dprintf(2, "Error: Unknown error");
		exit(101);
	}
}
