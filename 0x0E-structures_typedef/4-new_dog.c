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
	char *n, *o;
	dog_t *new_dog = malloc(sizeof(dog_t));

	n = name;
	o = owner;
	if (new_dog == NULL)
	{
		new_dog->name = n;
		new_dog->age = age;
		new_dog->owner = o;
		return (new_dog);
	}
	return (NULL);
}
