#include <stdlib.h>
#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area pointed to by s
 * @b: constant value
 * @n: nulber of byte
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int u;

		for (u = 0; u < size; u++)
		{
			s[u] = b;
		}
	}
	return (s);
}
/**
 * _calloc - create array
 *
 * @nmemb: the char we fell with
 * @size: the size of array
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (size == 0 || nmemb == 0)
		return (NULL);
	ar = malloc(nmemb * size);
	if (ar == NULL)
		return (NULL);
	_memset(ar, 0, nmemb * size);
	return (ar);
}

