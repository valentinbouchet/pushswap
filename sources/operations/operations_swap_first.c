/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** operations 1
*/

#include "pushswap.h"
#include "my.h"

void swap_a(int *list, int size)
{
    if (size >= 2)
        swap_elem(list, 0, 1);
}

void swap_b(int *list, int size)
{
    if (size >= 2)
        swap_elem(list, 0, 1);
}

void swap_ab(int *first_list, int *second_list, int size_first_list, \
int size_second_list)
{
    swap_a(first_list, size_first_list);
    swap_b(second_list, size_second_list);
    my_putstr("ss");
}