#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - print name from function pointer
 * @name: char string
 * @f: pointer to function
 * Return: Always 0 (success)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
