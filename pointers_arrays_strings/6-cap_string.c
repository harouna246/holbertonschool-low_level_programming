#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: The string to be modified
 *
 * Return: A pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sep[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		/* Capitalize first letter if it's a lowercase letter */
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		/* Check for separator before current character */
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i] == sep[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
				break;
			}
		}
		i++;
	}
	return (str);
}
