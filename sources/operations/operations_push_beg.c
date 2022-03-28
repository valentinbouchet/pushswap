/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** operations 3
*/

#include "pushswap.h"
#include "my.h"

void swap_ra(int *list_a, int size)
{
    for (int i = 0; (i + 1) < size; i++)
        swap_elem(list_a, i, i + 1);
}

void swap_rb(int *list_b, int size)
{
    for (int i = 0; (i + 1) < size; i++)
        swap_elem(list_b, i, i + 1);
}

void swap_rr(int *list_a, int *list_b, int size_list_a, int size_list_b)
{
    swap_ra(list_a, size_list_a);
    swap_rb(list_b, size_list_b);
    my_putstr("rr");
}