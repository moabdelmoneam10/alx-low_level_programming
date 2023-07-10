#include <stdlib.h>
#include <string.h>
/**
 * argstostr - the function canctunate the words
 * @ac: the conter of arg
 * @av: the words
 * Return: pointer to first element
 */
char *argstostr(int ac, char **av)
{
	if (ac == 0 || av == NULL)
		return (NULL);
	int arg_length, total_length, i, j, index;

	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	if (result == NULL)
		return (NULL);
	index = 0;
	for (i = 0; i < ac; i++)
	{
		arg_length = strlen(av[i]);
		for (j = 0; j < arg_length; j++)
		{
			result[index] = av[i][j];
			index++;
		}
		result[index] = '\n';
		index++;
	}
	result[index] = '\0';
	return (result);
}
