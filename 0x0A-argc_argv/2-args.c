#include "main.h"
/**
 * main - the main function
 * @argc: the counter of argument
 * @argv: hte arguments
 *
 * Return: always return 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
