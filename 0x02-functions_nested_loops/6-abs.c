#include "main.h"
/**
 *  _abs - return the abslute value 
 * @n: is the number we calculate
 * Return the abslute n
*/
int _abs(int n)
{
if (n > 0)
{
	return (n);
}
else if (n == 0)
{
	return (0);
}
else
{
	return (n*-1);
}
}
