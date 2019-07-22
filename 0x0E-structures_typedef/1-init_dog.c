#include "dog.h"
#include <stdlib.h>
/**
*init_dog - initializes the dog structure
*@name: name
*@d: structure
*@name: the name
*@age: the age
*@owner: the name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
