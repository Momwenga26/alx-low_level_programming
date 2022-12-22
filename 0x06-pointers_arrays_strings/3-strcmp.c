#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 * Return: If s1 < s2, the -ve difference of the first unmatched characters.
 *         If s1 == s2, 0
 *         if s1 > s2, the +ve difference of the first unmatched character
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

