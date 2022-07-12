#include "main.h"
/**
 * puts2 - prints every other character of a  string to stdout
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
