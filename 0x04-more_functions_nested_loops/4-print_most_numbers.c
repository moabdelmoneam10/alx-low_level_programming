#include "main.h"
/**
 * print_most_numbers - print the numbers
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int c;

for (c = 0; c <= 9; c++)
{
	if (c == 2 || c == 4)
		continue;
	_putchar(c + '0');
}
_putchar('\n');
}
