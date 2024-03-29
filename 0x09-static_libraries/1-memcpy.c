#include "main.h"
#include <stdio.h>
/**
 * _memcpy -> Coppies a block of memory from one string to another,
 * @dest: The string we are copying to.
 * @src: The string we are copying from.
 * @n: The specific number of bytes to be copied.
 * Return: Copied string to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
