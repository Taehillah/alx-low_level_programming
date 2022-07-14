/**
 * _strncat - concatenates two strings
 * @dest:is a string
 * @src: string
 * @n: n elements concatenate in
 * Return: pointer outputs  `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
int i, co;
for (i = 0; dest[i] != '\0'; i++)
{
}
for (co = 0; co < n; co++)
{
dest[i + co] = src[co];
if (src[co] == '\0')
co = n;
}
return (dest);
}
