#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer representation, or 0 if no numbers found.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	unsigned int result = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			if (result > (UINT_MAX - (s[i] - '0')) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	if (sign == -1 && result > (unsigned int)INT_MAX + 1)
		return (INT_MIN);
	else if (sign == 1 && result > (unsigned int)INT_MAX)
		return (INT_MAX);

	return (sign * result);
}
