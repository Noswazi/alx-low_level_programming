#include <stdio.h>

/**
 * line of code must be written here
 * Remember:
 * not allowed to use a
 * not allowed to modify p
 * one statement allowed
 *Return: 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
