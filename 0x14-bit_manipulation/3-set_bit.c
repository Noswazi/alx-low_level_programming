#include "main.h"

/**
 * set_bit - sets value of bit to 1
 * at a given index
 * @n: number to be updated
 * @index: index of the bit
 *
 * Return: return 1 if (SUCCESS) or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);
	i = 1 << index;
	*n = (*n | i);

	return (1);
}
