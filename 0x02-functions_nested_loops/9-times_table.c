#include "main.h"

/**
 * times_table - prints the 9 times table, starting with zero
 *
 * r = row, cl = column d = digit of curent result
 */

void times_table(void)
{
	int r, cl, d;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cl = 1; cl <= 9; cl++)
		{
			d = (r * cl);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');
			if (cl < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
