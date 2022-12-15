#include "main.h"

/**
 * _abs - computes absolute value of an integer
 *
 * @i: the integer to be computed
 *
 * Return: the absolute value
 */

int _abs(int i)
{
	return (i * ((i > 0) - (i < 0)));
}
