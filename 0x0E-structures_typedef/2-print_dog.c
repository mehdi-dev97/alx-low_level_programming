#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: dog strcut
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	d->name = d->name != NULL ? d->name : "(nil)";	
	d->owner = d->owner != NULL ? d->owner : "(nil)";
	if (d != NULL)
	{	
		printf("Name: %s\n", d->name);
		if (d->age < 0)
		{
			printf("Age: (nil)\n");
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		return;
	}
}
