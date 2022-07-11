#include "main.h"
#include <stdio.h>
/**
 * _strlen - results the length of a string str.
 * @str: The string whose length we need.
 * Return: The length of @str .
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
