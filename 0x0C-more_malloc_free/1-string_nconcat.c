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
	unsigned int r, p, t;
	char *s;

	if (s1 == NULL)
		r = 0;
	else
	{
		for (r = 0; s1[r]; r++)
			;
	}
	if (s2 == NULL)
		p = 0;
	else
	{
		for (p = 0; s2[p]; p++)
			;
	}
	if (p > n)
		p = n;
	s = malloc(sizeof(char) * (r + p + 1));
	if (s == NULL)
		return (NULL);
	for (t = 0; t < i; t++)
		s[t] = s1[t];
	for (t = 0; t < p; t++)
		s[t + i] = s2[t];
	s[r + p] = '\0';
	return (s);
}
