#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcat -> A function that concatenates two strings.
 * @src: First string to be added.
 * @dest: Second string to be added.
 * Return: add string
 */

char *_strcat(char *dest, char *src)
{
	int i, l;
	i = 0;
	l = 0;
	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
		dest[l++] = src[i];

	return (dest);
}
