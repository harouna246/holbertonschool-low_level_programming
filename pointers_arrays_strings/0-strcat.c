#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string (must have enough space)
 * @src: source string to append to dest
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	/* Find the end of dest */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy src to the end of dest */
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0'; /* Null-terminate the result */

	return (dest);
}
