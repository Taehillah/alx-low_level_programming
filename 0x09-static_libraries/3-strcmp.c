#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcmp -> Compares two strings.
 * @s1: 1st string to be compared.
 * @s2: 2nd string to be compared.
 * Return: The result of thee comparison.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
