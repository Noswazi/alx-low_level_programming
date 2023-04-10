#include "main.h"

/**
 * append_text_to_file - appends text at end of file
 * @filename: name of file to append
 * @text_content: data to append
 *
 * Return: 1 if successful , 0 if error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, i);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
