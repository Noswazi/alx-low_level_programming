#include "main.h"

/**
 * largest_number - prints the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third interger
 *  Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
