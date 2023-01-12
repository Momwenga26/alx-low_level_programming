#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 * separated by a new line in the string
 * @ac: the no. of arguments passed to the program
 * @av: an array of pointers to the argument
 *
 * Return: pointer too the new string
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			size++;
	}
	str =  malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];
		str[i++] = '\n';
	}
	str[size] = '\0';
	return (str);
}
