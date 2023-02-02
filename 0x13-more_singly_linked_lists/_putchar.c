#include "lists.h"

/**
 * _putchar - writes the char cto stdout
 * @c: the char to print
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
