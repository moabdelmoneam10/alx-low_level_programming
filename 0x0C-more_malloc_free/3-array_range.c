#include <stdlib.h>
#include "main.h"
/**
 * array_range - create array
 *
 * @min: the char we fell with
 * @max: the size of array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *ar;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof(ar) * (max - min) + 1);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (max >= min)
	{
		ar[i] = min;
		i++;
		min++;
	}

	return (ar);
}

