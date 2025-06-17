#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');     /* convert 0-9 to ASCII '0'-'9' */
		else
			putchar(i - 10 + 'a'); /* convert 10-15 to ASCII 'a'-'f' */
	}

	putchar('\n');
	return (0);
}
