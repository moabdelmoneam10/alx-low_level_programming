#include "main.h"
/**
 * print_sign - check the lowercase character
 * @n: is the number we check the sign
 * Return: 1 c is lowercase
 * Returns 0 otherwise
*/
int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
