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
char digit;
for (digit = '0'; digit <= '9'; digit++)
{
	putchar(digit);
}
for (digit = 'a'; digit <= 'f'; digit++)
{
	putchar(digit);
}
putchar('\n');
return (0);
}
