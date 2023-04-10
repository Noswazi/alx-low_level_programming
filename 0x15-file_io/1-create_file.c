#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to be placed in file
 *
 * Return: 1 if successful , -1 if error
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	int o, w;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)

	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
