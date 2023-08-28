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
  * rev_string - print the string in rev
  * @s: the string
  */

void rev_string(char *s)
{
	int len, i;
	char s2[100];

	i = 0;
	len = _strlen(s);
	while (s[i] != '\0')
	{
		s2[i] = s[i];
		i++;
	}
	i = 0;
	while (len--)
		s[i++] = s2[len];
}
