#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - create array
 * @f: function pointer to a function that takes a char* argument
 *
 * @name: the word we work with
 * Return: No thing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
