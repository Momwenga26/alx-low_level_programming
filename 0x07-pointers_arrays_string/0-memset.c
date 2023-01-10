#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory
 * area pointed to by @s with the constant byte @c
 * @s: pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer o the nenory @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
