#include "dog.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);
/**
 * _strlen - Length of a string.
 * @s: String to check for its length.
 * Return: String length.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: Destination of the copied string.
 * @src: Where to copy a string.
 * Return: Pointer to the dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Makes new struct dog.
 * @name: Name of the dog.
 * @age: age of the dog.
 * @owner: Owner of the dog.
 * Return: New struct.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;

	if (name == NULL || age < 0 || owner == NULL)
	{
		return (NULL);
	}
	doggie = malloc(sizeof(dog_t));
	if (doggie == NULL)
	{
		return (NULL);
	}
	doggie->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggie->name == NULL)
	{
		free(doggie);
		return (NULL);
	}
	doggie->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggie->owner == NULL)
	{
		free(doggie->name);
		free(doggie);
		return (NULL);
	}
	doggie->name = _strcpy(doggie->name, name);
	doggie->age = age;
	doggie->owner = _strcpy(doggie->owner, owner);
	return (doggie);
}
