#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialization a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name to initalize
 * @age: age to initalize
 * @owner: owner to initalize
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
