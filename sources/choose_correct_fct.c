/*
** EPITECH PROJECT, 2020
** pushswap
** File description:
** choose op
*/

#include "pushswap.h"
#include "my.h"

int find_diff(int *list)
{
    int count = 0;

    for (int i = 0; i < 2; i++) {
        count *= 10;
        if (list[i] > list [i + 1])
            count += 1;
        else
            count += 2;
    }
    return (count);
}

int verif_list(int *list, int size)
{
    for (int i = 0; (i + 1) < size; i++) {
        if (list[i + 1] < list[i])
            return (0);
    }
    return (1);
}

int control_swap(int *list, int size)
{
    int *list_b;
    if (verif_list(list, size))
        return (verif_list(list, size));
    if (size == 2) {
        swap_a(list, size);
        my_putstr("sa");
        return (verif_list(list, size));
    }
    list_b = malloc(sizeof(int) * size);
    if (list_b == NULL) {
        write(2, "malloc error", 12);
        return (0);
    }
    if (size == 3)
        control_three_size_inf(list, size);
    else
        control_big_size(list, list_b, size);
    return (verif_list(list, size));
}