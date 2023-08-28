#include "main.h"

/**
  * _strlen - get the length of the string
  * @s: the string
  * Return: the length of string
  */

int _strlen(char *s)
{
	int cnt;

	for (cnt = 0; *s++ != '\0'; cnt++)
	{}
	return (cnt);
}
