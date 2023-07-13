#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - create array
 *
 * @b: the char we fell with
 */
void *malloc_checked(unsigned int b)
{
	char *ar;

	ar = malloc(b);
	if (ar == NULL)
	{
		exit(98);
	}
	else
		return (ar);		
}

