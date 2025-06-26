#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: the string to reverse
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	/* Find the length of the string */
	while (s[j] != '\0')
		j++;
	j--;

	/* Swap characters from start and end */
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
