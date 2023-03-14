#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of chars
 * @size: size of array
 * @c: char assigned
 *
 * Return: pointer of array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
