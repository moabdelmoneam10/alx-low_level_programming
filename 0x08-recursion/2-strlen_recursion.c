#include "main.h"
/**
 *  _print_rev_recursion - print the string
 *
 * @s: the string we print
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return(0);
	return(1 + _strlen_recursion(s + 1));
}
