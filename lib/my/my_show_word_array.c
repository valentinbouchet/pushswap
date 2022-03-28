/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** lib_my
*/

#include <stddef.h>
#include "my.h"

int my_show_word_array(char * const *tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        for (int j = 0; tab[i][j] != '\0'; j++) {
            my_putchar(tab[i][j]);
        }
        my_putchar('\n');
    }
    return (0);
}