#include "main.h"
/**
 * print_times_table - Prints the timestable,
 *                     starting with 0.
 * @q: The value of the times table to be printed.
 */
void print_times_table(int q)
{
int num, mult, prod;
if (q >= 0 && q <= 15)
{
for (num = 0; num <= q; num++)
{
_putchar('0');
for (mult = 1; mult <= q; mult++){
_putchar(',');
_putchar(' ');
prod = num * mult;
if (prod <= 99)
_putchar(' ');	
if (prod <= 9)
_putchar(' ');
if (prod >= 100)
{
_putchar((prod / 100) + '0');
_putchar(((prod / 10)) % 10 + '0');
}
else if (prod <= 99 && prod >= 10)
{
_putchar((prod / 10) + '0');
}
_putchar((prod % 10) + '0');
}
_putchar('\n');
}
}
}
