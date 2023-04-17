#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * owner: owner of the dog.
 * Return: an object of type dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog != NULL)
	{
		new_dog->name = name;
		new_dog->age = age;
		new_dog->owner = owner;
		return (new_dog);
	}
	return (NULL);
}