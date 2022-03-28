/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** lib_my
*/

char *my_revstr(char *str)
{
    char stockage;
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        i++;
    }
    i--;
    while (i >= j) {
        stockage = str[j];
        str[j] = str[i];
        str[i] = stockage;
        j++;
        i--;
    }
    return (str);
}
