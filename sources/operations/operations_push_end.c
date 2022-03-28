/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** operations 4
*/

#include "pushswap.h"
#include "my.h"

void swap_rra(int *list_a, int size)
{
    for (int i = (size - 1); i > 0; i--)
        swap_elem(list_a, i - 1, i);
}

void swap_rrb(int *list_b, int size)
{
    for (int i = (size - 1); i > 0; i--)
        swap_elem(list_b, i - 1, i);
}

void swap_rrr(int *list_a, int *list_b, int size_list_a, int size_list_b)
{
    swap_rra(list_a, size_list_a);
    swap_rrb(list_b, size_list_b);
    my_putstr("rrr");
}