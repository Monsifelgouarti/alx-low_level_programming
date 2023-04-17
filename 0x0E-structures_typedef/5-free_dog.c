#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - dealocate a dog
 * @d: a pointer to a dog.
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
