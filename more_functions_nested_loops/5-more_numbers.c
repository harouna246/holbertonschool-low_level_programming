#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	char buf[151]; /* 15 numbers × 10 lignes + 10 newlines */
	int index = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				buf[index++] = '1';
			buf[index++] = '0' + (j % 10);
		}
		buf[index++] = '\n';
	}

	for (i = 0; i < index; i++)
		_putchar(buf[i]);
}
