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
	char *bufz;

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

		if (text_content != NULL)
		{
			while (j < 1024)
			{
				for (i = 0; i < 1024; i++)
				{
				}
			}

			writz = write(newzFlz, text_content, i);
			if (writz == -1)
			{
				fprintf(STDERR, "Error: Can't write to %s\n", toFi);
				exit (99);
			}
		}
	}
	fprintf(STDERR, "Usage: cp file_from file_to\n");
	exit (97);
}
