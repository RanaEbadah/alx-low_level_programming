#include<stdlib.h>
#include "dog.h"

/**
*stringLenght -  return a length of a string
*@str: The string
*Return: The string length
*
*/
int stringLenght(char *str)
{
	int len = 0, i = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}

/**
*AssignStr -  copy string from source to destination
*@dest: The dog name
*@src: The dog age
*Return: the string
*/
char *AssignStr(char *dest, char *src)
{
	int length = 0, i = 0;

	while (src[i] != '\0')
	{
		length++;
		i++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
*new_dog -  create new dog
*@name: The dog name
*@age: The dog age
*@owner: The dog owner.
*Return: a new dog
*
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int length1, length2;
	dog_t *newDog;

	length1 = stringLenght(name);
	length2 = stringLenght(owner);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
	return (NULL);

	newDog->name = malloc(sizeof(char) * (length1 + 1));
	newDog->owner = malloc(sizeof(char) * (length2 + 1));

	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	if (newDog->owner == NULL)
	{
		free(newDog);
		return (NULL);
	}

	AssignStr(newDog->name, name);
	AssignStr(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
