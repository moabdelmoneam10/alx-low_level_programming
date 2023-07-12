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
	int i, j, sum;
	char *arg;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
