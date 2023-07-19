#include "main.h"
/**
  * str_length : length of string
  *
  * @str: the string we measure
  * Return: the size
  */
int str_length(char str[])
{
	int count;

	for (count = 0; str[count] != '\0'; ++count);
	return count;
}
/**
 * *_strcat - function that concatunate two words
 *
 * @dest: the word we append to scr word
 * @src: the first word
 * Return: pointer to the destination
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, length = str_length(dest) + str_length(src);
	static char result[length];

	while (dest[i] == '\0')
	{
		result[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		result[i++] = src[j++];
	}
	result[++i] = '\0';
	return (result);
}
