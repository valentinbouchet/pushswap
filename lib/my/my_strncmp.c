/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** lib_my
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && n >= i + 1) {
        i++;
    }
    return (s2[i]-s1[i]);
}
