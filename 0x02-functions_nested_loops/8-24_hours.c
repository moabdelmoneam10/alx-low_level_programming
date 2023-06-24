#include "main.h"
/**
 * jack_bauer - print every min in the day
 */
void jack_bauer(void)
{
	int i , j;
	for (i = 0; i < 24; i++)
	{	
		for (j = 0; j < 60; j++)
		{
			_putchar(i * 0.1 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j * 0.1 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
	}
}
