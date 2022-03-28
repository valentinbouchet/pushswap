/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** lib_my
*/

#include <stdlib.h>

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    if (src == NULL)
        return  (dest);
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i++] = '\0';
    return (dest);
}
