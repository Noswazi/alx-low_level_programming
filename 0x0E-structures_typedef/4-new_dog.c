#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, k = 0;
	dog_t *s_dog;

	s_dog = malloc(sizeof(dog_t));
	if (s_dog == NULL)
		return (NULL);

	s_dog->age = age;

	for (i = 0, k = 0; name[i] != '\0'; i++)
		k++;
	s_dog->name = malloc(sizeof(char) * (k + 1));
	if (s_dog->name == NULL)

	{
		free(s_dog);
		return (NULL);
	}

	for (i = 0; 1 ; i++)
	{
		(*(s_dog->name + i)) = name[i];
		if (name[i] == '\0')
			break;
	}

	for (i = 0, k = 0; owner[i] != '\0'; i++)
		k++;
	s_dog->owner = malloc(sizeof(char) * (k + 1));
	if (s_dog->owner == NULL)
	{
		free(s_dog);
		free(s_dog->name);
		return (NULL);
	}

	for (i = 0; 1 ; i++)
	{
		(*(s_dog->owner + i)) = owner[i];
		if (owner[i] == '\0')
			break;
	}
	return (s_dog);
}
