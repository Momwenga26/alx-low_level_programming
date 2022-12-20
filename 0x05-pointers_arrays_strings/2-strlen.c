#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: the character used for length
 * Return: the length of s
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
