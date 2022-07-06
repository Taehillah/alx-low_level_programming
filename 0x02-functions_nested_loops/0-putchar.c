#include "main.h"
#include <stdio.h>
/**
* Write a program that prints _putchar, followed by a new line.
*
*/
int main(void)
{
char *putter = "_putchar\n";
while (*putter)
{
putchar(*putter);
putter++;
}
return (0);
}
