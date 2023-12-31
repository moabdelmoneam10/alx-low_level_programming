#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that find the first occurrencce of char
 *
 * @s: the string we search in
 * @c: the char we search for
 * Return: pointer to dest
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
