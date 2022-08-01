
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int len(char *s);
/**
 * len -  find length of string
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
	char *cpyn, *cpyo;
	int lenn, leno;

	if (name == NULL || owner == NULL)
		return (NULL);

	lenn = len(name);
	leno = len(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	cpyn = malloc(sizeof(char *) * (lenn + 1));
	if (cpyn == NULL)
	{
		free(d);
		free(cpyn);
		return (NULL);
	}
	cpyn = strcpy(cpyn, name);
	cpyo = malloc(sizeof(char *) * (leno + 1));
	if (cpyo == NULL)
	{
		free(d);
		free(cpyo);
		free(cpyn);
		return (NULL);
	}
	cpyo = strcpy(cpyo, owner);
	d->name = cpyn;
	d->age = age;
	d->owner = cpyo;
	return (d);
}
