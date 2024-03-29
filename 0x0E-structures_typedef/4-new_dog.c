#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Return: the new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_name;
char *copy_name, *copy_owner;
unsigned int x, name_len = 0, owner_len = 0;
new_name = malloc(sizeof(dog_t));
if (name == NULL)
return (NULL);
if (name == NULL || age <= 0 || owner == NULL)
{
free(new_name);
return (NULL);
}
for (x = 0; name[x] != '\0'; x++)
name_len++;
for (x = 0; owner[x] != '\0'; x++)
owner_len++;
copy_name = malloc(sizeof(char) * (name_len + 1));
if (copy_name == NULL)
return (NULL);
copy_owner = malloc(sizeof(char) * (owner_len + 1));
if (copy_owner == NULL)
return (NULL);
for (x = 0; x <= name_len; x++)
copy_name[x] = name[x];
for (x = 0; x <= owner_len; x++)
copy_owner[x] = owner[x];
new_name->name = copy_name;
new_name->owner = copy_owner;
new_name->age = age;
return (new_name);
}
