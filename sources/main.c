/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** main
*/

#include <stdlib.h>
#include "pushswap.h"
#include "my.h"

int main(int argc, char **argv)
{
    int *stock_list = malloc(sizeof(int) * (argc - 1));
    int size_list = argc - 1;

    stock_list = init_list(stock_list, argc, argv);
    control_swap(stock_list, size_list);
    my_putchar('\n');
    return (0);
}