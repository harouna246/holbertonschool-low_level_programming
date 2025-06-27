#include "main.h"

/**
 * puts2 - Affiche un caractère sur deux d'une chaîne de caractères
 * @str: chaîne à traiter
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (i % 2 == 0)
        {
            _putchar(str[i]);
        }
        i++;
    }
    _putchar('\n'); /* Inclure ceci seulement si une nouvelle ligne est attendue */
}
