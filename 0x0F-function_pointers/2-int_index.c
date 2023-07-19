#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index- finding the index of element in array
 * @array: the array we search in
 * @size: the size of array
 *
 * @cmp: action we work
 * Return: the index
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
