#include <stdio.h>
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

	d->name = name;
	d->age = age;
	d->owner = owner;
}