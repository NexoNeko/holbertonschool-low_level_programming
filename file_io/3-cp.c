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
		errz(97, NULL, NULL);
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
	int newzFlz, writz, i = 0, j = 0;
	char *bufz = NULL;
	FILE *oleFlz = fopen(fromFi, "r");

	if (!oleFlz)
	{
		__close(oleFlz, 0, NULL);
		errz(98, fromFi, toFi); /** error 98 */
	}
	newzFlz = creat(toFi, 0664);
	if (newzFlz == -1)
	{
		__close(oleFlz, newzFlz, NULL);
		errz(99, fromFi, toFi); /** error 99 */
	}
	bufz = malloc(sizeof(char) * 1024);
	if (!bufz)
	{
		__close(oleFlz, newzFlz, bufz);
		errz(101, NULL, NULL); /** error 101 */
	}

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
			__close(oleFlz, newzFlz, bufz);
			errz(99, fromFi, toFi); /** error 99 */
		}
		i = 0;
		bufz[i] = (char) j;
	}
	writz = write(newzFlz, bufz, i);
	return (0);
}

/**
 * errz - handles error messages
 *
 * @errCod: Error code
 * @oFi: File that was attempted to be opened
 * @nFi: File that was attempted to write on
 */
void errz(int errCod, const char *oFi, char *nFi)
{
	switch (errCod)
	{
	case 97:
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	case 98:
		dprintf(2, "Error: Can't read from file %s\n", oFi);
		exit(98);
	case 99:
		dprintf(2, "Error: Can't write to %s\n", nFi);
		exit(99);
	case 101:
		dprintf(2, "Error: Unable to assign memory to heap");
		exit(101);
	default:
		dprintf(2, "Error: Unknown error");
		exit(102);
	}
}

/**
 * __close - handles closing sd and errors
 *
 * @sFrm: 'fromFile' sd
 * @sTo: 'toFile' sd
 * @bufz: Buffer
 */
void __close(FILE *sFrm, int sTo, char *bufz)
{
	int i = 0;

	if (bufz)
		free(bufz);
	if (sFrm)
		i = fclose(sFrm);
	if (i != 0)
		dprintf(2, "Error: Can't close fd");

	if (sTo)
		i = close(sTo);
	if (i != 0)
		dprintf(2, "Error: Can't close fd %d", sTo);

	if (i != 0)
		exit(100);
}
