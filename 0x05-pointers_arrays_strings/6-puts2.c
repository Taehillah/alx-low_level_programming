#includes "main.h"
#includes <stdio.h>
/**
 * puts2 - results in one char out of two in a string.
 * @str: The string containing characters.
 */
void puts2(char *str)
{
int index = 0, len = 0;
while (str[index++])
len++;
for (index = 0; index < len; index += 2)
putchar(str[index]);
putchar('\n');
}
