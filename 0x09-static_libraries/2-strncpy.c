#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy -> copies one string to another.
 * @dest: A string to be copied to.
 * @src: A string that is copird to.
 * @n: The no of bytes to be copied.
 * Return: dest with a coppy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int l = 0;

	while (src[i++])
		l++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = l; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
