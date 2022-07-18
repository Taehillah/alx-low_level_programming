#include "main.h"
#include <string.h>
/**
 * _memset -  fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory.
 * @n: The number of bytes to be filled.
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
return (memset(s,n,b));
}
