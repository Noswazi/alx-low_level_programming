#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big, 1 if little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *y;

	y = (char *)&i;

	return (*y);
}
