#include<stdlib.h>
#include "dog.h"

/**
*free_dog -  return a length of a string
*@d: The string
*Return: void
*
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
