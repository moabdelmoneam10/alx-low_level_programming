#include "main.h"
/**
 * factorial - return factorial of the num
 *
 * @n: the number
 * Return: the factorial
 */
int factorial(int n)
{
	if (n <= 0)
		return (1);
	return (n * factorial(n - 1));
}
