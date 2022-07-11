#include "main.h"
#include <stdio.h>
/**
 * rev_string - results in a string s.
 * @s: The string to be reversed.
 * @index -- decrements
 * @index ++ increments
 * @len: the length of the string
 */
void rev_string(char *s)
{
int len = 0, index = 0;
char tmp;
while (s[index++])
len++;
for (index = len - 1; index >= len / 2; index--)
{
tmp = s[index];
s[index] = s[len - index - 1];
s[len - index - 1] = tmp;
}
}
