#include "main.h"
/**
 * create_file - creates a new file
 *
 * @filename: Name of the file to create
 * @text_content: text to add to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filz = 0, wrtz = 0, i;

	if (filename)
	{
		filz = open(filename, O_WRONLY | O_CREAT, 0600 | O_TRUNC);

		if (filz != -1 || text_content)
		{
			for (i = 0; text_content[i] != '\0'; i++)
				;
			wrtz = write(filz, text_content, i);
		}
		close(filz);
		if (wrtz != -1)
			return (1);
	}
	return (-1);
}
