#include "main.h"
#include <stdio.h>
/**
 * print_rev - results in a string reverse.
 * @s: is the string that needs to be printed.
 * @len++ is the increment of len
 * printing @s to its size
 */
void print_rev(char *s)
{
int len = 0, index;
while (s[index++])
len++;
for (index = len - 1; index >= 0; index--)
putchar(s[index]);
putchar('\n');
}
