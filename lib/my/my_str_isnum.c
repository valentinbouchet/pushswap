/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** lib_my
*/

int my_str_isnum(char const *str)
{
    int j = 0;

    if (str[0] == '\0')
        return (1);
    while ((str[j] == '-' || str[j] == '+') && str[j + 1] != '\0')
        j++;
    for (int i = j; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}
