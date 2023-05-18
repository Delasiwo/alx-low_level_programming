#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates a range of integers
 * @min: range of values stored
 * @max: range of values stored and number of elements
 *
 * Return: pointer to the new range
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
