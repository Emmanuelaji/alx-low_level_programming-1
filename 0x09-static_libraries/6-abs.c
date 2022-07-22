#include "main.h"
/**
 * _abs - prints out absolute value of integer we put in
 * @n: integer we are checking
 * Return: n
 */
int _abs(int n)
{
if (n >= 0)
return (n);
else
{
n *= -1;
return (n);
}
}
