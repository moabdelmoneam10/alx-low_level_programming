#include "main.h"
/**
 * puts2 - print the string
 *
 * @str: the string we print
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i % 2 == 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}
