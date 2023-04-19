#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: an object of type dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	if (new_dog != NULL)
	{

		new_dog->name = malloc(strlen(name) + 1);
		if (new_dog->name == NULL)
		{
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		new_dog->owner = malloc(strlen(owner) + 1);
		if (new_dog->owner == NULL)
		{
			free(new_dog->owner);
			free(new_dog->name);
			free(new_dog);
			return (NULL);
		}
		strcpy(new_dog->name, name);
		strcpy(new_dog->owner, owner);
		new_dog->age = age;
		return (new_dog);
	}
	return (NULL);
}
