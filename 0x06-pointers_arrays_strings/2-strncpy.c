#include "main.h"
/**
 * _strncpy - cpoies n bytes of src to the dest string
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 * Return: address of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		if (i < n)
			dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
