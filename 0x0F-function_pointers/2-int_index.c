#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - create array
 * @f: function pointer to a function that takes a char* argument
 *
 * @name: the word we work with
 * Return: No thing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, f;

	if (size <= 0)
		return (-1);
	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			f = (*cmp)(array[i]);
			if (f == 1)
				return (i);
	
		}
	}
	return (-1);
}
