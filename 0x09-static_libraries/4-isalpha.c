#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet or not.
 * @c: Character for checking.
 *
 * Return: 1st checks if a character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	return (1);
else
	return (0);
}
