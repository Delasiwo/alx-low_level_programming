#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - using malloc to allocate memory
 * @b: allocate number of bytes
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
