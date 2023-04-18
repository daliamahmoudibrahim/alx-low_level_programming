#include<stdio.h>
#include "dog.h"
/**
 * print_dog - print dog`s information
 * @d: refer to structure dog
 *
 * return : (0)
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nill)";
	if (d->owner == NULL)
		d->owner = "(nill)";
	printf("Name: %s\nAge: %f\nOwne: %s\n", d->name, d->age, d->owner);
}
