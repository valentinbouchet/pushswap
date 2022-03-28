/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** control fcts by size
*/

#include "pushswap.h"
#include "my.h"

int find_ind_small_int(int *list, int size)
{
    int status = 0;
    int index = 0;

    for (int i = 0; i < size / 2; i++) {
        if (list[index] > list[i])
            index = i;
    }
    for (int j = size / 2; j < size; j++) {
        if (list[index] > list[j]) {
            index = j;
            status++;
        } else if (list[index] == list[j] && !(status) && (size - j - 1) \
        < index) {
            index = j;
            status++;
        } else if (list[index] == list[j] && (status > 0) && j > index)
            index = j;
    }
    return (index);
}

void control_three_size_sup(int *list_a, int size)
{
    if (list_a[0] >= list_a[2]) {
        swap_rra(list_a, size);
        my_putstr("rra");
    } else {
        swap_a(list_a, size);
        swap_ra(list_a, size);
        my_putstr("sa ra");
    }
}

void control_three_size_inf(int *list_a, int size)
{
    int diff = find_diff(list_a);

    if (diff == 11) {
        swap_a(list_a, size);
        swap_rra(list_a, size);
        my_putstr("sa rra");
    }
    if (diff == 12) {
        if (list_a[0] >= list_a[2]) {
            swap_ra(list_a, size);
            my_putstr("ra");
        } else {
            swap_a(list_a, size);
            my_putstr("sa");
        }
    }
    if (diff == 21)
        control_three_size_sup(list_a, size);
}

void control_small_int_ind(int *list_a, int *list_b, int *size_list_a, \
int *size_list_b)
{
    while (find_ind_small_int(list_a, *size_list_a) != 0) {
        if (find_ind_small_int(list_a, *size_list_a) >= (*size_list_a) / 2) {
            swap_rra(list_a, *size_list_a);
            my_putstr("rra ");
        } else {
            swap_ra(list_a, *size_list_a);
            my_putstr("ra ");
        }
    }
    swap_pb(list_a, list_b, size_list_a, size_list_b);
    my_putchar(' ');
}

void control_big_size(int *list_a, int *list_b, int size_list_a)
{
    int size_list_b = 0;

    while (size_list_a != 3) {
        control_small_int_ind(list_a, list_b, &size_list_a, &size_list_b);
    }
    if (!(verif_list(list_a, size_list_a))) {
        control_three_size_inf(list_a, size_list_a);
        my_putchar(' ');
    }
    while (size_list_b != 0) {
        swap_pa(list_a, list_b, &size_list_a, &size_list_b);
        if (size_list_b >= 1 )
            my_putchar(' ');
    }
}