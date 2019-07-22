#include <stdlib.h>
#include "dog.h"
/**
*free_dog - free the memory space
*@d: free everything
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->newOwner);
		free(d);
	}
}
