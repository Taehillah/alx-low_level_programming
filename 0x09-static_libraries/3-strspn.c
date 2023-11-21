#include <stdio.h>
#include "main.h"
/**
 * _strspn -> Calculates the length of prefix.
 * @s: main C strinh to be snaccened.
 * @accept: string to be matched with s.
 * Return: b no of scanned prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int b = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
			b++;
			break;
			}
			else if (accept[i + 1] == '\0')
			return (b);
		}
		s++;
	}
	return (b);
}
