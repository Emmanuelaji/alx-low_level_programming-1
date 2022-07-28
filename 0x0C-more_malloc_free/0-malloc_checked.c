#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc, exit(98) if it fails
 * @b: memory to be allocated
 * Return: pointer to allocated memory or normal process termination if error
*/
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);
	return (d);
}
