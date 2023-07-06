#include "main.h"
/**
 * _sqrt_helper - return the square
 *
 * @n: the number we calculate
 * @start: the pointer
 * @end: the end pointer
 * Return: the square of num
 */
int _sqrt_helper(int n, int start, int end)
{
	int mid;
	
	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;
	if (mid * mid == n)
	{
		return (mid);
	}
	else if (mid * mid > n)
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
}

/**
 * _sqrt_recursion - return the num
 *
 * @n: the number we rasied
 * Return: the num
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
