#include "main.h"
/**
 * print_numbers - print the numbers
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
int c;

for (c = 0; c <= 9; c++)
{
	_putchar(c + '0');
}
_putchar('\n');
}
