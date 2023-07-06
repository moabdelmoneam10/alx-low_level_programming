#include "main.h"
/**
 * isDivisible - check if the number is divisible
 *
 * @n: the number we calculate
 * @div: the divider
 * Return: true of false
 */
int isDivisible(int n, int div)
{
	if (div == 1)
		return (0);
	if (n % div == 0)
		return (1);
	return (isDivisible(n, div - 1));
}

/**
 * is_prime_number - check if the number if prime
 *
 * @n: the number we check
 * Return: true or false
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (!isDivisible(n, n - 1));
}
