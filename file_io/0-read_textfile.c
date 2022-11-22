#include "main.h"
/**
 * read_textfile - reads a file and prints it to stdout
 *
 * @filename: Name of the file to read
 * @letters: Amount of characters it managed to read
 *
 * Return: 1 on success, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filz = 0, wrtz = 0;
	size_t i;
	char *bufz = NULL;

	if (filename)
	{
		bufz = malloc(sizeof(char) * letters + 1);
		if (!bufz)
			return (0);

		filz = open(filename, O_RDONLY);

		if (filz != -1)
		{
			read(filz, bufz, letters);
			for (i = 0; bufz[i] != '\0' && i < letters; i++)
				;
			wrtz = write(STDOUT_FILENO, bufz, i);
		}
		free(bufz);
		close(filz);
		if (wrtz == -1)
			return (0);
	}
	return (wrtz);
}
