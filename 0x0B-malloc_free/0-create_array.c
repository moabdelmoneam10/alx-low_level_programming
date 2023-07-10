#include <stdlib.h>
#include "main.h"
/**
 *  create_array - create array
 *
 * @c: the char we fell with
 * @size: the size of array
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = c;
		i++;
	}

	return (ar);
}

