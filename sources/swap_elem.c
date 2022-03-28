/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** swap_elements
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void swap_elem(int *array, int index1, int index2)
{
    int stock;

    if (array != NULL) {
        stock = array[index1];
        array[index1] = array[index2];
        array[index2] = stock;
    } else {
        write(2, "Array is null", 14);
        return;
    }
}