/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** lib_my
*/

#include <stdlib.h>
#include "my.h"

int my_getnbr(char const *str)
{
    int sign = 1;
    int	result = 0;

    while (*str == '-' || *str == '+') {
        if (*str == '-')
            sign = - sign;
        str = str + 1;
    }
    while (*str != '\0' && *str >= '0' && *str <= '9') {
        if (result > 214748364)
            return (0);
        if (result == 214748364 && *str > 7 && sign == 1)
            return (0);
        if (result == 214748364 && *str > 8 && sign == -1)
            return (0);
        result = result * 10 + *str - 48;
        str = str + 1;
    }
    return (result * sign);
}