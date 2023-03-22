#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array
 * @array: pointer to an array
 * @size: size of array
 * @action: action(function) to iterate
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
