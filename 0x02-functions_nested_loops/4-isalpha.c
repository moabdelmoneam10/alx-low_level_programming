#include "main.h"
/**
 * _isalpha - check the lowercase character
 * @c: is the character we check
 * Return: 1 c is character
 * Returns 0 otherwise
*/
int _isalpha(int c)
{
if ((c > 96 && c < 123) || (c < 64 && c > 91))
	return (1);
else
	return (0);
}
