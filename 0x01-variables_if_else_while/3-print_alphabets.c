#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 * returns alphabets in lower and upper cases
 */

int main(void)
{
	int ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
