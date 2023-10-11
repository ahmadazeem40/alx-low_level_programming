#ifndef DOG_H
#define DOG_H

/**
  * struct dog - a dog struct
  * @name: name
  * @age: age
  * @owner: name of owner
  * Description: struct for a dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

