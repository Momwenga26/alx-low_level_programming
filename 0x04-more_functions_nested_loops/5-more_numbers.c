#include "main.h"

/**
 * more_numbers -  prints 10 times the numbers, from 0 to 14
 *
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
