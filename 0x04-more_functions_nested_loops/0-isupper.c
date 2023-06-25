#include "main.h"
/**
 * _islower - check the lowercase character
 * @c: is the character we check
 * Return: 1 c is lowercase
 * Returns 0 otherwise
*/
int _islower(int c)
{
if (c > 64 && c < 91)
	return (1);
else
	return (0);
}
