#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int len(char *s);
/**
* len - find length of string
* @s: char pointer
* Return: int
*/
int len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
* strcpy - copies the string pointed to by src
* @dest: char pointer
* @src: char pointer
* Return: char
*/
char *strcpy(char *dest, char *src);
char *strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != 0; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
* new_dog - create new instance of struct dog
* @name: member
* @age: member
* @owner: member
*
* Return: instance of struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *copy_of_name;
	char *copy_of_owner;

	d = malloc(sizeof(dog_t)); /* validate if d initiated correctly */
	if (d == NULL)
		return (NULL);

	d->age = age;

	/* make copies of struct members and validate, else free on error */
	/* set values of struct members to copies of arguments or set to NULL */
	if (name != NULL)
	{
		copy_of_name = malloc(len(name) + 1);
		if (copy_of_name == NULL)
		{
			free(d);
			return (NULL);
		}
		d->name = strcpy(copy_of_name, name);
	}
	else
		d->name = NULL;

	if (owner != NULL)
	{
		copy_of_owner = malloc(len(owner) + 1);
		if (copy_of_owner == NULL)
		{
			free(copy_of_name);
			free(d);
			return (NULL);
		}
		d->owner = strcpy(copy_of_owner, owner);
	}
	else
		d->owner = NULL;

	return (d);
}
