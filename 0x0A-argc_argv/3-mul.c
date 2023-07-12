#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the main function
 * @argc: the counter of argument
 * @argv: hte arguments
 *
 * Return: always return 0 for success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int num1, num2;

	if (argc < 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	printf("%d\n", (num1 * num2));
	return (0);
}
