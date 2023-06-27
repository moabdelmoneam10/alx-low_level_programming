#include "main.h"
/**
 * puts_half - tests function that prints if integer is positive or negative
 *
 * @str: the string we measure
 *
 */
void puts_half(char *str)
{
	int i, counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;
	counter--;
	if (counter % 2 == 0)
		counter /= 2;
	else
		counter = (counter - 1) / 2;
	for (i = counter; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
