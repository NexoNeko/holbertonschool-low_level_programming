#include "main.h"
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
	int oleFlz, newzFlz, i, j, writz;
	char *bufz = NULL;

	i = j = 0;
	if (fromFi && toFi)
	{
		oleFlz = open(fromFi, O_RDONLY | S_IRUSR);
		if (oleFlz == -1)
		{
			fprintf(STDERR, "Error: Can't read from file %s\n", fromFi);
			exit (98);
		}

		newzFlz = creat(toFi, 0664);
		if (newzFlz == -1)
		{
			fprintf(STDERR, "Error: Can't write to %s\n", toFi);
			exit (99);
		}

		bufz = malloc(sizeof(char) * 1024);
		if (!bufz)
		{
			fprintf(STDERR, "Error assigning memory to heap");
			exit (100);
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
				fprintf(STDERR, "Error: Can't write to %s\n", toFi);
				exit (99);
			}
			i = 0;
			bufz[i] = (char) j;
		}
		return (1);
	}
	fprintf(STDERR, "Usage: cp file_from file_to\n");
	exit (97);
}
