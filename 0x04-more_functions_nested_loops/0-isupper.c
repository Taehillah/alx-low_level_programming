#include "main.h"
#include <stdio.h>

/**
 * isupper - a function that checks for uppercase character
 * input is c
 * Return: 0 if not successful 1 if c is uppercase
 */
int isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
