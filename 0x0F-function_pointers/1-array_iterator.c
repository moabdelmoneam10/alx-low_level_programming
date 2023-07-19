#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function to print array by another function
 * @array: what we print
 * @size: the size of the array
 * @action: a pointer to the function you need to use
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
