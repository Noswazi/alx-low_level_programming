#include "main.h"

/**
 * binary_to_uint - binary number converted into an unsigned int
 * @b: string ofbinary
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 1, result = 0, len = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			result += i;
		i *= 2;

		len--;
	}
	return (result);
}
