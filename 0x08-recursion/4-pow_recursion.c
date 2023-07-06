#include "main.h"
/**
 * _pow_recursion - return power of the num
 *
 * @x: the number we rasied
 * @y: the power
 * Return: the power of num
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y--));
}
