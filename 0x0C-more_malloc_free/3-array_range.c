#include <stdlib.h>
#include "main.h"
/**
 *  create_array - create array
 *
 * @c: the char we fell with
 * @size: the size of array
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	unsigned int i;
	int *ar;

	if (min > max)
		return (NULL);
	ar = malloc(sizeof ar * (max - min));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (max >  min)
	{
		ar[i] = min;
		i++;
		min++;
	}

	return (ar);
}

