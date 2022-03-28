/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** init list
*/

#include "my.h"

int *init_list(int *list, int argc, char **argv)
{
    for (int i = 1; i < argc; i++)
        list[i - 1] = my_getnbr(argv[i]);
    return (list);
}