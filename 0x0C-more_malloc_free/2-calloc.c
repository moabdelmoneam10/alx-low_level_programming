#include <stdlib.h>
#include "main.h"
/**
 * _calloc - create array
 *
 * @nmemb: the char we fell with
 * @size: the size of array
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ar;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = 0;
		i++;
	}

	return (ar);
}

