#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: allocated bytes.
 * Return: a pointer
 */
void *malloc_checked(unsigned int b)
{
void *all = malloc(b);
if (all == NULL)
exit(98);
return (all);
}
