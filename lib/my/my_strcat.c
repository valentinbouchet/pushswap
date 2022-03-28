/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** lib_my
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int k = 0;

    while (src[k] != '\0') {
        dest[dest_len + k] = src[k];
        k++;
    }
    dest[dest_len + k] = '\0';
    return (dest);
}