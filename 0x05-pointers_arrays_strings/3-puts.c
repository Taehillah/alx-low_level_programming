#include "main.h"
#include <stdio.h>
/**
 * _puts - results the string to standart out.
 * @str: The string that needs to be printed.
 * @str++ incremented
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
