#include "main.h"
/**
 * _strlen - tests function that prints if integer is positive or negative
 *
 * @s: the string we measure
 *
 * Return: the number of character
 */
int _strlen(char *s)
{
	int i, counter = 0;

	for (i = 0; s[i] != '\0'; i++)
		counter++;
	return (counter);
}
