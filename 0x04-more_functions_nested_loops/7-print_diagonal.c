#include "main.h"
/**
 * print_diagonal - print every min in the day
 *
 * @n: the number of back slach
 */
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
else
	_putchar('\n');
}
