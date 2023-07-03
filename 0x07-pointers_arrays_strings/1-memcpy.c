/**
 * _memcpy - function that fills the memory
 *
 * @src: the src of copy
 * @dest: the dest we copy
 * @n: the number of element we copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
