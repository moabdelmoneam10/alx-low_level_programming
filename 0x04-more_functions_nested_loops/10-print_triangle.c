#include "main.h"
/**
 * print_triangle - print every min in the day
 *
 * @size: the number of back slach
 */
void print_triangle(int size)
{
int i, k, j;

if (size > 0)
{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1 - i; j++)
		{
			_putchar(' ');
		}
		for (k = 0 ; k < i + 1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
else
	_putchar('\n');
}
