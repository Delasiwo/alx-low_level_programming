#include "function_pointers.h"

/**
 * print_name - print a name function
 *
 * @name: input print name
 * @f: function to pointer print name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
