#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the memory block
 * Return: pointer to the new allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
