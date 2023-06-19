#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: var of type struct dog to be initialized.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog
 * Return: a pointer of the initialized var @d.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr;

	if (d == NULL)
		ptr = malloc(sizeof(struct dog *));
	else
		ptr = d;

	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
}
