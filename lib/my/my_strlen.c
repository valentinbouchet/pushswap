/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** lib_my
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
