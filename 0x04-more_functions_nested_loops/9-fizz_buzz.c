#include "stdio.h"
/**
 * main - Started point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ",i);

	}
	printf("\n");	
}
