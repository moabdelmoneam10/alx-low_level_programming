#include "main.h"

/**
  * swap_int - swap to int
  * @a: the first int
  * @b: the secund int
  */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
