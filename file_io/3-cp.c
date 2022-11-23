#include "main.h"
/**
 * main - entry point for the program
 *
 * @argc: Num of arguments
 * @argv: Name of the files to copy
 *
 * Return: 1 on success, error on failure
 */
int main (int argc, char **argv)
{
	if (argc != 3)
		errz(97);
	else
		create_file(argv[1], argv[2]);
	return (1);
}


/**
 * create_file - creates a file with rw permissions
 *
 * @filename: the file name to create
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *fromFi, char *toFi)
{
	int newzFlz, i, j, writz;
	char *bufz = NULL;
	FILE *oleFlz = fopen(fromFi, "r");

	i = j = 0;
	if (!oleFlz)
		errz(98); /** error 98 */

	newzFlz = creat(toFi, 0664);
	if (newzFlz == -1)
		errz(99); /** error 99 */

	bufz = malloc(sizeof(char) * 1024);
	if (!bufz)
		errz(100); /** error 100 */
	while (bufz[i] != EOF)
	{
		while ((j = fgetc(oleFlz)) != EOF && i <= 1024)
		{
			bufz[i] = (char) j;
			i++;
		}
		writz = write(newzFlz, bufz, i);
		if (writz == -1)
			errz(99); /** error 99 */
		i = 0;
		bufz[i] = (char) j;
	}
	return (1);
}

/**
 * errz - handles error messages
 *
 * @a: Error code
 */
void errz(int errCod)
{
	if (errCod == 97)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit (97);
	}
	if (errCod == 98)
	{
		fprintf(stderr, "Error: Can't read from file [TODO]\n");
		exit (98);
	}
	if (errCod == 99)
	{
		fprintf(stderr, "Error: Can't write to [todo]\n");
		exit (99);
	}
        if (errCod == 100)
	{
		fprintf(stderr, "Error assigning memory to heap");
		exit (100);
	}
}
