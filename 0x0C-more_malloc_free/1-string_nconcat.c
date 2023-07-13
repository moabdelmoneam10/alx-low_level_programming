#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatonate n char
 *
 * @s1: the pointer for first string
 * @s2: the pointer for second string
 * @n: the number cha from second string
 * Return: pointer to storage
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int i, j;

	ar = malloc(strlen(s1) + n);
	if (ar == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 == NULL)
			s1 = "";
		else if (s2 == NULL)
			s2 = "";
		i = 0;
		while (s1[i] != '\0')
		{
			ar[i] = s1[i];
			i++;
		}
		j = 0;
		while (j < n)
		{
			ar[i] = s1[i];
			j++;
		}
		return (ar);
	}

