#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowercase, uppercase;
for (lowercase='a'; lowercase<='z'; lowercase++)
{
        putchar(lowercase);
}
for (uppercase='A'; uppercase<='Z'; uppercase++)
{
	putchar(uppercase);
}
putchar('\n');
return (0);
}
