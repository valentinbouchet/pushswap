/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** lib_my
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;
    int len = 0;

    for (int k = 0; to_find[k] != '\0'; k++)
        len++;
    while ((str[j] != '\0' || to_find[i] != '\0') && str) {
        while ((str[j] == to_find[i])) {
            i++;
            j++;
        }
        if (to_find[i] == '\0' && i == len && i != 0)
            return (&str[j-i]);
        if (str[j] == '\0')
            break;
        j = j - i + 1;
        i = 0;
    }
    return (NULL);
}
