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
                putchar(*putter);
                putter++;
        }
        putchar("\n");

return 0;
}
