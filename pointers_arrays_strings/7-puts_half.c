#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 */
void puts_half(char *str)
{
    int i, len = 0, start;

    // Calculer la longueur de la chaîne
    while (str[len] != '\0')
    {
        len++;
    }

    // Déterminer le point de départ : moitié ou (longueur + 1)/2 si impaire
    if (len % 2 == 0)
        start = len / 2;
    else
        start = (len + 1) / 2;

    // Afficher à partir de start
    for (i = start; i < len; i++)
    {
        _putchar(str[i]);
    }

    _putchar('\n');
}
