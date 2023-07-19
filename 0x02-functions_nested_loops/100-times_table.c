#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @n: num we work with
 */
void ones(int m, int next)
{


}
void print_times_table(int n)
{
	int i, j, next;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0 ; j <= n; j++)
			{
				int m = i * j;

				if (m < 10)
				{
					_putchar(m + '0');
					if (j != n  && i * (j + 1) < 10)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						if (j != n)
						{
							_putchar(',');
							_putchar(' ');
							_putchar(' ');
						}
					}
				}
				else if (m < 100)
				{
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
					if (j != n && i * (j + 1) < 100)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
					}
					else
					{
						if (j != n)
						{
 							_putchar(',');
							_putchar(' ');
						}
					}
				}
				else
				{
					_putchar(m / 100 + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar(m % 10 + '0');
					if (j != n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
		_putchar('\n');
		}
	}
}
