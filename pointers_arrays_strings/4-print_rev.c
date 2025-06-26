#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string to print
 */
void print_rev(char *s)
{
	int i = 0;

	/* Find the length of the string */
	while (s[i] != '\0')
	{
		i++;
	}

	/* Print in reverse */
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
