#include <string.h>
/**
 * _strcat - concatenate two strings
 * @dest: char string is concatenated to
 * @src: char string
 * Return: pointer output as a string `dest`
 */
char *_strcat(char *dest, char *src)
{
int i, n;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (n = 0; (dest[i + n] = *src++) != '\0'; n++)
{
}
return (dest);
}
