#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string which
 * is a duplicate of the string str
 * @str: string to be duplicated
 * Return: On success, return a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
		return (NULL);
	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
