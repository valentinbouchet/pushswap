/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** lib_my
*/

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'a' && str[i] <= 'z') || \
            (str[i] >= 'A' && str[i] <= 'Z')))
            return (0);
    }
    return (1);
}
