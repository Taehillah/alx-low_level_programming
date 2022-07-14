#include <string.h>
/**
 * _strncpy - Entry
 * @dest: mv file to
 * @src: mv file from
 * @n: input n of the set char
 * Return: Always 0 (On Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; src[i] != '\0'; i++)
if (i < n)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
