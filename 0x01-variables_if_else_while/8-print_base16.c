#include <main.h>

/**
 * main -Entry point
 *
 * Returns: Always 0 (success)
 *
 * prints all numbers of base 16 in lowercase
 */

int main(void)
{
	int num;
	char ch;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
