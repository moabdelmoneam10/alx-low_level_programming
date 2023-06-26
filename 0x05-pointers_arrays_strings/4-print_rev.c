#include "main.h"
/**
 * print_rev - tests function that prints if integer is positive or negative
 *
 * @s: the string we measure
 *
 */
void print_rev(char *s)
{
	int i, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	for (i = counter - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
