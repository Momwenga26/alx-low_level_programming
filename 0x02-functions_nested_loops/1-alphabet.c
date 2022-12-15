#include "main.h"

/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
