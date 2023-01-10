#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
