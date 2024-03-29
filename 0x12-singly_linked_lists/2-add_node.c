#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strlen - finds the length of a string
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
unsigned int i;
for (i = 0; str[i]; i++)
;
return (i);
}
/**
*add_node - adds a new node at the beginning
*of a list_t list.
*@head: a pointer to the head of the list_t list.
*@str: the string to be added to the list_t list.
*
*Return: If the function fails - NULL.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
}
new->len = _strlen(new->str);
new->next = *head;
*head = new;
return (new);
}
