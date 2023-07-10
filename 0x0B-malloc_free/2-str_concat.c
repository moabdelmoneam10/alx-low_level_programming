#include "main.h"
/**
  * sizes - return the size of string
  *
  * @p: pointer to first index of string
  * Return: size
  */
int sizes(char *p)
{
	if (p == NULL)
		return (0);
	if (*p == '\0')
		return (0);
	return (1 + sizes(p + 1));

}
/**
 *  _strdup - duplicate strings
 *
 * @str: the string we duplicate
 * Return: pointer to the new string
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i, j;
	char *ar;

	size1 = sizes(s1);
	size2 = sizes(s2);
	ar = malloc(sizeof(char) * ((++size1) + size2));
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		ar[i] = s1[i];
		i++;
	}
	j = 0;
	while ( s2 != NULL && s2[j] != '\0' )
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	return (ar);
}

