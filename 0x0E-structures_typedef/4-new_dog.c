#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns te lenght of a string
 * @s: strin to evaluate
 * Return: te length of te string
 */

int _strlen(char *s)
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * *_strcpy -    copies te string pointed to by src
 * includin te terminatin null byte (\0)
 * @dest: pointer to the buffer in which we copy the string
 * @src: string to be copied
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
		dest[i] = '\0';
		return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: name of te dog
 * @age: age of te dog
 * @owner: owner of te dog
 * Return: ponter to te new dog (Success, Null otherwise)
 */
dog_t *new_dog(char *name, float age, char *owner)
	dog_t *dog;
	int len1, len2;
	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	return (NULL);
	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
{
	free(dog);
	return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
{
	free(dog);
	free(dog->name);
	return (NULL);
}
_strcpy(dog->name, name);
_strcpy(dog->owner,owner);
dog->age = age;
return (dog);
}
