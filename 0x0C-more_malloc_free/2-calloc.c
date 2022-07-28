#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - print 0s into 2D grid
 * @nmemb: array num
 * @size: size of ea array element
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *mem;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
mem = malloc(nmemb * size);
if (mem == NULL)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
mem[i] = 0;
return (mem);
}
