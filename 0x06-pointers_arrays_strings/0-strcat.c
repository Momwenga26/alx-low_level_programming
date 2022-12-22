#include "main.h"

/**
 * _strcat -  concatenates two strings.
 * @dest: first string
 * @src: second string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;
	for (a = 0; src[a]; a++)
		dest[b++] = src[a];

	return (dest);
}
