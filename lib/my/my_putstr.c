/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** lib_my
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    if (str == NULL)
        return (0);
    write(1, str, my_strlen(str));
    return (1);
}
