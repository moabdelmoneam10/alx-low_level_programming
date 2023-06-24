#include "main.h"
/**
 * print_last_digit - print and return the last digit
 * @n: is the number we calculate
 * Return: the last digit
*/
int print_last_digit(int n)
{
long m = n;
if (m < 0)
	m *= -1;
n = m % 10;
_putchar(n + '0');
return (n);
}
