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
	unsigned int i = 1, flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			i++;
		}
		else
		{
			flag = i;
			i = 0;
		}
	}
	if (i != 0)
		return (NULL);
	else
		return (s + flag);
}
