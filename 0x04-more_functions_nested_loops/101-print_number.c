#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: character to be used
 *
 */

void print_number(int n)
{
	usigned int num = m;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
