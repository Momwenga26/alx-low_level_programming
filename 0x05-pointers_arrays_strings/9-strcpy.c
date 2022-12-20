#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src,
 * including the terminating null byte to a buffer dest
 * @dest: A buffer to copy the string to
 * @src: The source string to copy
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
