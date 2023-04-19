#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees dog stored in mem.
 * @d: Pointer to the location to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
