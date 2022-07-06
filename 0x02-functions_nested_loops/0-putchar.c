#include "main.h"
#include <stdio.h>
/**
* Write a program that prints _putchar, followed by a new line.
* main is the Entry function
* Return: Always 0 when successful
*/
int main(void) /*main function return an int 0 success 1 for opp*/
{
char *putter = "_putchar\n";
while (*putter)
{
putchar(*putter);
putter++;
}
return (0);
}
