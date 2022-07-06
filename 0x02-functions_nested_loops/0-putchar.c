#include "main.h"
#include <stdio.h>
/**
 * Write a program that prints _putchar, followed by a new line.
 *
 */
int main(void)
{
        char *putter= "_putchar";

        while (*putter)
        {
                _putchar(*putter);
                putter++;
        }
        _putchar("\n");

return 0;
}
