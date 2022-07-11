#include "main.h"
#include <stdio.h>
/**
 * print_rev - results in a string reverse.
 * @str: is the string that needs to be printed.
 * @i++ is the increments
 * @n represents fcounter
 * printing @str to its size
 */
void print_rev(char *str)
{
int fcounter = 0;
int i, n;
for (i = 0; str[i] != '\0'; i++)
{
fcounter++;
}
for (n = (fcounter - 1); n >= 0; n--)
{
putchar(str[n]);
}
putchar('\n');
}
