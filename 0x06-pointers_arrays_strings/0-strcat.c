#include "main"
/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * Return: address of dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; (dest[i + j] = *src++) != '\0'; j++)
	{
	}
	return (dest);
}
