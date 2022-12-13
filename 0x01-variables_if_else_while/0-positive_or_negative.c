#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*to indicate whether a number is positive or negative*/

/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)

{/*to indicate whether a number is positive or negative*/

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
