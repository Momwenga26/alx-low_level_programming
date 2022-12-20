#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * followed by a new line
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;
	int ln = 0;

	while (str[i++])
		ln++;
	for (i = 0; i < ln; i += 2)
		_putchar(str[i]);

	_putchar ('\n');
}
