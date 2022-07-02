#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	num = 0;

	do
	{
	putchar((num % 10) + '0');
	num++;
	}

	while (num < 10); 

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}

