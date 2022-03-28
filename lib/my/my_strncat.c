/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** lib_my
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int k = 0;

    for (int i = 0; dest[i] != '\0'; i++)
        k++;
    for (int j = 0; src[j] != '\0' || j != nb; j++) {
        k++;
        dest[k] = src[j];
    }
    dest[k + 1] = '\0';
    return (dest);
}
