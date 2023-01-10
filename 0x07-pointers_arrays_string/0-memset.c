#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: the character to fill the memory
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory at @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
