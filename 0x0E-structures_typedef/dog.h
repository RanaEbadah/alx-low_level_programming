#ifndef GOG_H
#define GOG_H

/**
 * struct dog - dog data type
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* GOG_H */
