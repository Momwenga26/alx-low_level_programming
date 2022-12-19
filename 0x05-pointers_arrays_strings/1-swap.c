#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: first integer to be swapped
 * @b: second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
