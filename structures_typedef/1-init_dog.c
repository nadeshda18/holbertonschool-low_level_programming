#include <stdio.h>
#include "dog.h"
#include "main.h"
/**
 * init_dog - initialize a variable
 * @d: struct dog
 * @name: char
 * @owner: char
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
