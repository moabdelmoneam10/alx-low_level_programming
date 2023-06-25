#include "main.h"
/**
 * print_line - print the numbers
 *
 * Return: Always 0 (Success)
 */
/**
 * _abs - return the abslute value
 * @n: is the number we calculate
 * Return: the abslute n or 0
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n * -1);
	}
}

void print_line(int n)
{
int c;

n = _abs(n);
for (c = 0; c < n; c++)
{
	_putchar('_');
}
_putchar('\n');
}
