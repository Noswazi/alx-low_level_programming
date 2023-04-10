#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the file
 * @letters: number of letters function should print
 *
 * Return: actual number of letters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)

		free(buffer);
	return (0);

	{
		free(buffer);
		close(0);
	}
	return (w);
}
