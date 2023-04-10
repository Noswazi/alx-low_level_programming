#include "main.h"

/**
 * flip_bits - counts number of bits
 * @n: first number
 * @m: second number
 *
 * Return: returns number if bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int current;
	unsigned long int xor = n ^ m;
	int i, c = 0;

	for (i = 63; i >= 0; i--)
	{
		current = xor >> i;
		if (current & 1)
			c++;
	}
	return (c);
}
