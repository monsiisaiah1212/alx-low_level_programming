#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - initialize a variable of tpe struct dog
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
