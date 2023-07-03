/**
 * *_memset - function that fills the memory
 *
 * @s: the array we fill
 * @b: the char we fill by
 * @n: the number of element
 * Return: pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
