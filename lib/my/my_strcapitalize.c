/*
** EPITECH PROJECT, 2020
** my_strcapitalise
** File description:
** lib_my
*/

char *put_lowercase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;
    }
    return (str);
}

int is_uppercase(char x)
{
    if (x >= 'A' && x <= 'Z')
        return (1);
    else
        return (0);
}

int is_lowercase(char x)
{
    if (x >= 'a' && x <= 'z')
        return (1);
    else
        return (0);
}

int is_digit_lowercase_or_uppercase(char x)
{
    if ((x >= '0' && x <= '9') || is_lowercase(x) || is_uppercase(x))
        return (1);
    else
        return (0);
}

char *my_strcapitalize(char *str)
{
    put_lowercase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_lowercase(str[i]) && i == 0)
            str[i] -= 32;
        if (is_lowercase(str[i]) == 1 && \
            is_digit_lowercase_or_uppercase(str[i-1]) == 0) {
            str[i] -= 32;
        }
    }
    return (str);
}
