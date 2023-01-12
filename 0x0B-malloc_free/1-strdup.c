#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly
 * allocated space in memory
 * @str: the string to be copied
 *
 * Return: if str == NULL or insufficient
 * space available - NULL
 * otherwise - a pointer to the duplicated str
 */

char *_strdup(char *str)
{
	char *dup;
	int i, ln = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		ln++;
	dup = malloc(sizeof(char) * (ln + 1));
	if (dup == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	dup[ln] = '\0';
	return (dup);
}
