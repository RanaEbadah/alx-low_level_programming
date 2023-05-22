#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#include "dog.h"


/**
*print_dog -  print dog adata
*@d: struct dog.
*Return: void
*
*/

void print_dog(struct dog *d)
{
	char *dogName, *dogOwner;

	if (d == NULL)
	{
		printf("\n");
	}
	else
	{
		if (d->name == NULL)
		dogName = "(nil)";
		else
		dogName = d->name;

		if (d->owner == NULL)
		dogOwner = "(nil)";
		else
		dogOwner = d->owner;

		printf("Name: %s\n", dogName);

		if (isnan(d->age))
		printf("Age: (nil)\n");
		else
		printf("Age: %f\n", d->age);

		printf("Owner: %s\n", dogOwner);

	}
}
