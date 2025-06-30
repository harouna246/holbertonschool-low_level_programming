#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The integer value, or 0 if no numbers are found.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;
	unsigned int num = 0;

	while (s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';

			/* Check for overflow before updating result */
			if (result > (INT_MAX - num) / 10)
			{
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
			result = result * 10 + num;
		}
		else if (result != 0)
			break;
		i++;
	}
	return (sign * result);
}
