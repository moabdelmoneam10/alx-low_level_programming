#include "main.h"
/**
 *  rev_string- tests function that prints if integer is positive or negative
 *
 * @s: the string we measure
 *
 */
void rev_string(char *s)
{
	if (s == NULL)
		return;
	int length = 0;
	char *start = s;
	char *end = s;
	
	while (*end != '\0')
	{
		length++;
		end++;
	}
	end--;
	while (start < end)
	{
		char temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
