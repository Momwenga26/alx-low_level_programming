#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates 2 strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: If concatenation fails - NULL
 * otherwise - a pointer the newly-allocated space in memory
 * containing the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_s;
	int i, concat_i = 0, ln = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (i = 0; s1[i] || s2[i]; i++)
		ln++;
	concat_s = malloc(sizeof(char) * ln);
	if (concat_s == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		concat_s[concat_i++] = s1[i];
	for (i = 0; s2[i]; i++)
		concat_s[concat_i++] s2[i];
	return (concat_s);
}
