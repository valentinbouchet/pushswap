/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** lib_my
*/

#include <stdlib.h>
#include "my.h"

int my_isalphanum(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || \
    (c >= '0' && c <= '9')) {
        return (1);
    } else {
        return (0);
    }
}

int my_count_word(char const *str)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (my_isalphanum(str[i]) == 1 && my_isalphanum(str[i + 1]) != 1) {
            j++;
        }
    }
    return (j);
}

int my_len_word(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (my_isalphanum(str[i]) != 1)
            return (i);
    }
    return (i);
}

int remove_space(char const *str, int i, int a)
{
    while (my_isalphanum(str[a]) != 1) {
        a++;
        i++;
    }
    return (i);
}

char **my_str_to_word_array(char const *str)
{
    int k = 0;
    int i = 0;
    char **res = malloc(sizeof(char *) * my_count_word(str) + 1);

    i = remove_space(str, i, 0);
    if (res == NULL)
        return (NULL);
    for (int j = 0; j < my_count_word(str); j++) {
        k = 0;
        res[j] = malloc(sizeof(char) * my_len_word(str));
        if (res[j] == NULL)
            return (NULL);
        for (; str[i] != '\0' && my_isalphanum(str[i]) != 0; i++) {
            res[j][k] = str[i];
            k++;
        }
        i = remove_space(str, i, i);
    }
    return (res);
}