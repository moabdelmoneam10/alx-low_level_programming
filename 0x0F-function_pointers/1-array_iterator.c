#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - create array
 * @f: function pointer to a function that takes a char* argument
 *
 * @name: the word we work with
 * Return: No thing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, length;

	length = (int)size;
	if (array != NULL && action != NULL)
	{
		for (i = 0; i < length; i++)
			(*action)(array[i]);
	}
}
