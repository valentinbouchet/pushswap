/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** operations 2
*/

#include "pushswap.h"
#include "my.h"

void swap_pa(int *first_list, int *second_list, int *size_first_list, \
int *size_second_list)
{
    my_putstr("pa");
    if ((*size_second_list) == 0)
        return;
    for (int i = (*size_first_list); i > 0; i--)
        swap_elem(first_list, i - 1, i);
    first_list[0] = second_list[0];
    for (int j = 0; j < (*size_second_list); j++)
        swap_elem(second_list, j, (j + 1));
    (*size_first_list)++;
    (*size_second_list)--;
}

void swap_pb(int *first_list, int *second_list, int *size_first_list, \
int *size_second_list)
{
    my_putstr("pb");
    if ((*size_first_list) == 0)
        return;
    for (int i = (*size_second_list); i > 0; i--)
        swap_elem(second_list, i - 1, i);
    second_list[0] = first_list[0];
    for (int j = 0; j < (*size_first_list); j++)
        swap_elem(first_list, j, (j + 1));
    (*size_first_list)--;
    (*size_second_list)++;
}