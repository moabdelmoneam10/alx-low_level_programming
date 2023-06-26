#include "main.h"
/**
 *  rev_string- tests function that prints if integer is positive or negative
 *
 * @s: the string we measure
 *
 */
void rev_string(char *s)
{
	int i, j = 0, counter = 0;
	char *reverce;

	for (i = 0; s[i] != '\0'; i++)
	{	counter++;
		reverce[i] = s[i];
	}
	for (i = counter - 1; i >= 0; i--)
		s[i] = reverce[j++];
	_putchar('\n');
}
