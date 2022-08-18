#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
*/

int get_endianness(void)
{
	unsigned int y;
	char *z;

	y = 1;
	z = (char *) &y;
	return ((int)*z);
}
