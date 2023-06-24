#include "main.h"
/**
 *  times_table - prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int i , j ;
	for (i = 0; i < 10; i++)
	{
		for (j = 0 ; j < 10; j++)
		{
			int m = i * j;
			if (m < 10)
			{	
				_putchar(m + '0');
			 	_putchar(',');
			 	_putchar(' ');
			 	_putchar(' ');
			}
			else 
			{
				_putchar(m * 0.1 + '0');
				_putchar(m % 10 + '0');
				_putchar(',');
			 	_putchar(' ');
			 	_putchar(' ');
		
			}
		}
		_putchar('\n');
	}
}
