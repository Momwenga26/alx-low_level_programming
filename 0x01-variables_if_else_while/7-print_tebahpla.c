#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point prints lower case alphabets in reverse order
 *
 * Returns: Always 0 (success)
 *
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
