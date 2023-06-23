#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a[]="_putchar";
int i=0;
for(i=0;a[i]!='\0';i++)
{
_putchar(a[i]);
}
return 0;
}

