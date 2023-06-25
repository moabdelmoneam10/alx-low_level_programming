#include "main.h"
/**
 * _isupper - check the lowercase character
 * @c: is the character we check
 * Return: 1 c is lowercase
 * Returns 0 otherwise
*/
int _isupper(int c)
{
if (c > 64 && c < 91)
	return (1);
else
	return (0);
}
