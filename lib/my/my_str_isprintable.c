/*
** EPITECH PROJECT, 2020
** my_str_isprintable
** File description:
** lib_my
*/

int my_str_isprintable(char const *str)
{
    if (str[0] == '\0')
        return (1);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 0 && str[i] <= 31) || str[i] == 127)
            return (0);
    }
    return (1);
}
