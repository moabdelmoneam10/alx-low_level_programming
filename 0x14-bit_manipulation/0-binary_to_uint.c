#include "main.h"
/**
 * binary_to_uint - function to convert binary to int
 *
 * @b: the binary num
 *
 * Return: the convert number or 0 if failed
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
	if (*b == '0' || *b == '1')
	{
		num = (num * 2) + (*b++ - '0');
	}
	else
		return (0);
	}
	
	return (num);
}
