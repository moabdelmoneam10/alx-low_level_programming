#include "main.h"
/**
 * print_binary - function to convert int to binary
 *
 * @n: the decimal num
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;

	num = n;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	else
	{
		_putchar('1');
		while (n != 0)
		{
			n /= 2;
			if (n == 1)
			{
				if (num % 2 != 0)
				{
					_putchar('1');
					break;
				}
			}
			else if (n % 2 != 0)
				 _putchar('1');
 			else
				_putchar('0');
		}
	}
}
