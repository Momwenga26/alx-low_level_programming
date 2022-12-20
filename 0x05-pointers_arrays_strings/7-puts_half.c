#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0, ln = 0, n;

	while (str[i++])
		ln++;
	if ((ln % 2) == 0)
		n = ln / 2;
	else
		n = (ln + 1) / 2;

	for (i = n; i < ln; i++)
		_putchar(str[i]);

	_putchar('\n');
}
