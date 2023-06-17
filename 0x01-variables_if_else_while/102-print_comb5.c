#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int firstNumber, secondNumber;
for (firstNumber = 0; firstNumber <= 98; firstNumber++)
{
	for (secondNumber = firstNumber + 1; secondNumber <= 99; secondNumber++)
	{
		putchar(firstNumber / 10 + '0');
		putchar(firstNumber % 10 + '0');
		putchar(' ');
		putchar(secondNumber / 10 + '0');
		putchar(secondNumber % 10 + '0');
		if (firstNumber != 98 || secondNumber != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}

