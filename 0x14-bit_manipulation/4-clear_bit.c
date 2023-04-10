#include "main.h"

/**
 * clear_bit - sets value of bit to 0
 * @n: number to be updated
 * @index: index of bit
 *
 * Return: 1 if (Success), -1 if Error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	{
		if (index > 63)
			return (-1);
	}
	{
		i = 1 << index;

		if (*n & i)
			*n ^= i;
	}
	return (1);
}
