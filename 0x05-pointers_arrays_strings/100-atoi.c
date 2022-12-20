#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: the string to be converted
 * Return: the integer value of the converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int n = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			n = (n * 10) + (*s - '0');

		else if (n > 0)
			break;

	} while (*s++);

	return (n * sign);
}
