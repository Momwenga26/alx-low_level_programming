#include "main.h"

/**
 * print_triangle - prints a triangle using char #
 * followed by a new line
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int h, k;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (k = size - h; k > 0; k--)
				_putchar(' ');

			for (k = 0; k < h; k++)
				_putchar('#');

			if (h == size)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
