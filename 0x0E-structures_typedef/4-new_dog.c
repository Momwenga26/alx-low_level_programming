#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - finds the length of a string
 * @str: the string to be measured
 *
 * Return: the length of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}
/**
 * _strcopy - copies a str pointed ti by src
 * @dest: the buffer storing the string copy
 * @src: the source string
 *
 * Return: the pointer to the dest
 */

char *_strcopy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: The name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: The struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog2 = malloc(sizeof(dog_t));
	if (dog2 == NULL)
		return (NULL);
	dog2->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}
	dog2->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}
	dog2->name = _strcopy(dog2->name, name);
	dog2->age = age;
	dog2->owner = _strcopy(dog2->owner, owner);
	return (dog2);
}
