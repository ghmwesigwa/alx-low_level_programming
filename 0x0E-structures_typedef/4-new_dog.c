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
* strcpy - copies the string pointed to by src,
* including the terminating null byte (\0),
* to the buffer pointed to by dest
* @dest: char pointer
* @src: char pointer
* Return: char
*/
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
* new_dog - create a dog type
* @name: char *
* @age: float
* @owner: char *
*
* Return: Always dog_t.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *copy_of_name, *copy_of_owner;
	int lenn, leno;

	if (name == NULL || owner == NULL)
		return (NULL);

	lenn = len(name);
	leno = len(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	copy_of_name = malloc(sizeof(char *) * (lenn + 1));
	if (copy_of_name == NULL)
	{
		free(d);
		free(copy_of_name);
		return (NULL);
	}
	copy_of_name = strcpy(copy_of_name, name);
	copy_of_owner = malloc(sizeof(char *) * (leno + 1));
	if (copy_of_owner == NULL)
	{
		free(d);
		free(copy_of_owner);
		free(copy_of_name);
		return (NULL);
	}
	copy_of_owner = strcpy(copy_of_owner, owner);
	d->name = copy_of_name;
	d->age = age;
	d->owner = copy_of_owner;
	return (d);
}
