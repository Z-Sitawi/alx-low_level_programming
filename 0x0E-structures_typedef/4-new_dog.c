#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - creates a new dog.
 * @name: the new dog's name
 * @age: the new dog's age
 * @owner: the new dog's owner
 *
 * Return: NULL (fail).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int slen1 = strlen(name);
	int slen2 = strlen(owner);

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);

	newdog->name = malloc(sizeof(char) * (slen1 + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}

	newdog->owner = malloc(sizeof(char) * (slen2 + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->owner);
		return (NULL);
	}

	strcpy(newdog->name, name);
	strcpy(newdog->owner, owner);
	newdog->age = age;

	return (newdog);

}
