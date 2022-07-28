#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: last integer
 * @max: last integer
 * Return:pointer to newly allocated memory or NULL if fails
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = min++;
	return (array);
}
