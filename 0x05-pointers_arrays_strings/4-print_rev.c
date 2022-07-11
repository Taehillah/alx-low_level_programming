#include "main.h"
#include <stdio.h>
/**
 * print_rev - results in a string reverse.
 * @str: is the string that needs to be printed.
 * @len++ is the increment of len
 * printing @str to its size
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
