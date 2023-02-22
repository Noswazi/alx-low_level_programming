#include "main.h"

/*
 * print_alphabet_x10 -prints all alphabets in lowercase 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int w;
	char i;
	
	for (w = 1; w <= 10; w++)
	{
		for (i = 'a' ; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}
}
