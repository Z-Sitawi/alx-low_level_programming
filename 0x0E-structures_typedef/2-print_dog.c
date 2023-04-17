#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("(nil)\n");
	if (d == NULL)
                return;
	printf("name = %s\nage = %.1f\nowner = %s\n", d->name, d->age, d->owner);
}

