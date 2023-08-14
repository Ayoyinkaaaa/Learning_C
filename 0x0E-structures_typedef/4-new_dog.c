#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of thge dog
 * Return: pointer to the dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int j = 0, k = 0, l;
	dog_t *newdog;

	while (name[j] != '\0')
		j++;
	while (name[k] != '\0')
		k++;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newdog->name = malloc(j * sizeof(newdog->name));
	if (newdog->name == NULL)
	{
		free(newdog->name);
		return (NULL);
	}

	for (l = 0; l <= j; l++)
		newdog->name[l] = name[l];
	newdog->age = age;
	newdog->owner = malloc(k * sizeof(newdog->owner));
	if (newdog->owner == NULL)
	{
		free(newdog->owner);
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	for (l = 0; l <= k; l++)
		newdog->owner[l] = owner[l];
	return (newdog);
}
