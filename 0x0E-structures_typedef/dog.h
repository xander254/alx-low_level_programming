#ifndef DOG_H
#define DOH_H

/**
  * struct dog - details about a dog
  * @name: the name of the dog
  * @age: the age of the dog
  * @owner: the owner of the dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog_t;
#endif
