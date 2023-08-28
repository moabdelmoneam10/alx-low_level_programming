#include "main.h"

/**
  * print_array - print n number of array
  * @a: the poinnter to array 
  * @n: the number of element
  */


void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n-1)
			printf("%d, ", a[i]);
		else if (i == (n - 1))
			printf("%d\n", a[i]);
		i++;
	}
}
