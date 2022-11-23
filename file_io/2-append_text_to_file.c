#include "main.h"
/**
 * append_text_to_file - creates a file with rw permissions
 *
 * @filename: the file name to create
 * @text_content: content of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int newzFlz, i, writz;

	if (filename)
	{
		newzFlz = open(filename, O_WRONLY | O_APPEND | S_IRUSR | S_IWUSR);

		if (access(filename, F_OK) == -1)
			return (-1);
		if (newzFlz == -1)
			return (-1);

		if (text_content != NULL)
		{
			for (i = 0; text_content[i]; i++)
				;
			writz = write(newzFlz, text_content, i);
			if (writz == -1)
				return (-1);
		}
		if (access(filename, F_OK) != -1)
			return (1);
	}
	return (-1);
}
