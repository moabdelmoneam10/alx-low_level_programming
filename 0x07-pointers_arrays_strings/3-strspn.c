#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: the string to search in
 * @accept: the string of characters to accept
 * Return: the number of bytes in the initial segment of s consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j, len;

    len = 0;
    for (i = 0; s[i]; i++)
    {
        for (j = 0; accept[j]; j++)
        {
            if (s[i] == accept[j])
            {
                len++;
                break;
            }
        }
        if (!accept[j])
            break;
    }

    return len;
}

