#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 * Return: char pointer to newly allocated place in memory
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;
	unsigned int p = n, index;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index]; index++)
		len++;
	d = malloc(sizeof(char) * (len + 1));
	if (d == NULL)
		return (NULL);
	p = 0;
	for (index = 0; s1[index]; index++)
		d[p++] = s1[index];
	for (index = 0; s2[index] && index < n; index++)
		d[p++] = s2[index];
	d[p] = '\0';
	return (d);
}
