#include "main.h"

/**
 * print_alphabet_x10 -prints the alphabet 10 times
 * followed by a new line
 *
 * Return: x10 a-z
 *
 */

void print_alphabet_x10(void)
{
	char ch, i;

	i = 0;

	while (i < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		i++;
		_putchar('\n');
	}
}
