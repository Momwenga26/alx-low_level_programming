#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: string 1
 * @src: string 2
 * @n: max number of bytes to be copied from src
 * Return: a pointer to the resulting dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int b = 0;

	while (src[i++])
		b++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = b; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
