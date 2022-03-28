/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** test init list
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(init_list, correct_parameters_1)
{
    char *argv[] = {"./pushswap", "0", "1", "2", "3"};
    int *list = malloc(sizeof(int) * 4);
    list = init_list(list, 5, argv);
    int result[] = {0, 1, 2, 3};
    for (int i = 0; i < 4; i++)
        cr_assert_eq(list[i], result[i]);
}