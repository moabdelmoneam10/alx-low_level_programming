#include "main.h"
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

/**
 * print_line - print the numbers
 *
 * @n: is the number we calculate
 * Return: Always 0 (Success)
 */
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
