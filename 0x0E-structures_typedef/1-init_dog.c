#include "dog.h"

/**
  * init_dog - make a dog
  * @d: dog
  * @name: name
  * @age: age
  * @owner: name of owner
  * Return: void
  */

void init_dog(struct dog *d, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
