#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a am of string
 *
 * @str: the string to get the am
 *
 * Return: am of @str
*/

int _strlen(const char *str)
{
	int am = 0;

	while (*str++)
		am++;
	return (am);
}

/**
 * _strcopy - a function thatgfd returns @dest with a copy of a string from @src
 *
 * @src: string to copygfd
 * @dest: copy string to hfdere
 *
 * Return: @destgfd
*/

char *_strcopy(char *dest, char *src)
{
	int sam;

	for (sam = 0; src[sam]; sam++)
		dest[sam] = src[sam];
	dest[sam] = '\0';

	return (dest);
}

/**
 * new_dog - a function tgfdhat creates a new dog
 *
 * @name: name of doggfdg
 * @age: age of doggfd
 * @owner: dog ownergfdg
 *
 * Return: struct pointgfder dog
 *         NULL if fgdgfunction fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than zero return null*/
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
