#include "function_pointers.h"
/**
 * int_index - funtion that searches for integer
 * array: array
 * @size: size of array
 * @cmp: pointer to function
 * Return: Always 0 (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
