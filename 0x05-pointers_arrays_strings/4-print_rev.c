#include "main.h"
#include <stdio.h>
/**
 * print_rev - results in a string reverse.
 * @str: is the string that needs to be printed.
 * @len++ is the increment of len
 * printing @str to its size
 */
void print_rev(char *str)
{
int len = 0, index;
while (str[index++])
len++;
for (index = len - 1; index >= 0; index--)
putchar(str[index]);
putchar('\n');
}
