#include "main.h"
#include <stdio.h>
/**
 * _isdigit - check the number
 * @c: is the character we check
 * Return: 1 c is digit
 * Returns 0 otherwise
*/
int _isdigit(int c)
{
c -= 48;
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
