#include "main.h"
/**
 *  _puts_recursion - print the string
 *
 * @s: the string we print
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(char *s)
	}
	_putchar('\n');
}
