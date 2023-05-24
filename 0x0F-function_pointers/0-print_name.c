#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 * @name: add name
 * @f: is function to a pointer
**/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	else
	{
		f(name);
	}
}
