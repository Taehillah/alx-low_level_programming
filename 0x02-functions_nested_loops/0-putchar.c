#include <stdoi.h>
#include "main.h"
/**
 * Write a program that prints _putchar, followed by a new line.
 *
 */
int main(void)
{
	char c[] = '_putchar';
	int i;

	for (i=0; i<9, i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
		return 0;
}
