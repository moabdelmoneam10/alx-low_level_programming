#include "main.h"
/**
 * swap_int - swap two numbers
 *
 * @a: the first number
 * @b: the sec number
 */
void swap_int(int *a, int *b)
{
	int *n = NULL;
	*n = *a;
	*a = *b;
	*b = *n;
}
