#include "main.h"
/**
 * print_times_table - prints times table
 * @n: the number to be treated
 * Return: number matrix
 */
void print_times_table(int n)
{
	int a, b, m;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				m = a * b;
				_putchar(44);
				_putchar(32);
				if (m <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(m + 48);
				}
				else if (m <= 99)
				{
					_putchar(32);
					_putchar((m / 10) + 48);
					_putchar((m % 10) + 48);
				}
				else
				{
					_putchar(((m / 100) % 10) + 48);
					_putchar(((m / 10) % 10) + 48);
					_putchar((m % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
