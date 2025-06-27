#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
	int i, len = 0, start;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine the starting point */
	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len + 1) / 2;

	/* Print from the starting point */
	for (i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
