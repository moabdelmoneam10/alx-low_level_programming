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
	int num, i, cnt;
	int ar[5] = {25, 10, 5, 2, 1};
	if (argc != 2)
	{	
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if(num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	cnt = 0;
	for (i = 0; i < 5; i++)
	{
		if (num / ar[i] != 0)
		{
			cnt += (num / ar[i]);
			num %= ar[i];
		}
	}
	printf("%d\n", cnt);
	return (0);
}
