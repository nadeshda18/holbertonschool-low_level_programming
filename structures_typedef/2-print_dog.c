#include <stdio.h>
#include "main.h"
#include "dog.h"
/**
 * print_dog - write a funtionc that prints a struct dog
 * @d: pointer
 *
 * Return (0)
 */
void print_dog(struct dog *d)
{
	printf("%s\n", d->name);
	printf("%f\n", d->age);
	printf("%s\n", d->owner);
}
