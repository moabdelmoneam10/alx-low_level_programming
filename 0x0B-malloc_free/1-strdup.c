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
char *_strdup(char *str)
{
	int size, i;
	char *ar;

	size = sizes(str);
	if (size == 0)
		return (NULL);
	ar = malloc(sizeof(char) * ++size);
	if (ar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}

