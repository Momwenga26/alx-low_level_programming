#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point Returns alphabet in reverse order
 *
 * Returns: Always 0 (success)
 *
 *returns alphabets in reverse order
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
