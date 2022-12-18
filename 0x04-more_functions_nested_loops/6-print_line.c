#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: the number of _ characters to be printed
 */

void print_line(int n)
{
	int ln;

	for (ln = 0; ln < n; ln++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
