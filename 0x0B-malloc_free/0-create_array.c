#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * initializes it with a specific char
 * @size: the size of array to be initialized
 * @c: the specific char to initialize the array
 *
 * Return: if size == 0 or the function fails NULL
 * otherwise a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
