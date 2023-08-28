#include "main.h"

/**
  * _strlen - get the length of the string
  * @s1: the string
  * Return: the length of string
  */

int _strlen(char *s1)
{
	int cnt;

	for (cnt = 0; *s1++ != '\0'; cnt++)
	{}
	return (cnt);
}

/**
  * print_rev - print the string in rev
  * @s: the string
  */

void print_rev(char *s)
{
	int len;

	len = _strlen(s);
	while (len--)
		_putchar(s[len]);
	_putchar('\n');
}
