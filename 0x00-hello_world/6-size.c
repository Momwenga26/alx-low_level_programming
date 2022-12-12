#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of long int: %zu bytes\n", sizeof(longintType));
	printf("size of long long int: %zu bytes\n", sizeof(longlongintType));
	printf("size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
