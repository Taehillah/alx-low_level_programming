#include "main.h"
#include <stdio.h>
/**
 * swap_int a function that swaps the values of two integers.
 * @a: The first integer to be swapped around.
 * @b: The second integer to be swapped around.
 */
void swap_int(int *a, int *b)
{
int tmp = *a;
*b = tmp;
*a = *b;
}
