
#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints each array elem on a newl
 * @array: array
 * @size: no of elem to print
 * @action: pointer to print
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array == NULL)
return;
if (action == NULL)
return;
for (i = 0; i < size; i++)
action(array[i]);
}
