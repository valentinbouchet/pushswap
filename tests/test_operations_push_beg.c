/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** test operations 3
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(swap_ra, ra_simple_rotate_left)
{
    int array[6] = {6, 5, 4, 3, 2, 1};
    int result[6] = {5, 4, 3, 2, 1, 6};
    swap_ra(array, 6);
    for (int i = 0; i < 6; i++)
        cr_assert_eq(array[i], result[i]);
}

Test(swap_ra, ra_rotate_with_a_null_size)
{
    int array[6] = {6, 5, 4, 3, 2, 1};
    int result[6] = {6, 5, 4, 3, 2, 1};
    swap_ra(array, 0);
    for (int i = 0; i < 6; i++)
        cr_assert_eq(array[i], result[i]);
}

Test(swap_rr, swap_rr_size_l_a_0, .init=redirect_all_std)
{
    int first_list[6] = {6, 5, 4, 3, 2, 1};;
    int second_list[6] = {6, 5, 4, 3, 2, 1};
    int result[6] = {5, 4, 3, 2, 1, 6};
    int size_first_list = 0;
    int size_second_list = 6;

    swap_rr(first_list, second_list, size_first_list, size_second_list);
    for (int i = 0; i < 6; i++)
        cr_assert_eq(first_list[i], (6 - i));
    for (int j = 0; j < size_second_list; j++)
        cr_assert_eq(second_list[j], result[j]);
    cr_assert_stdout_eq_str("rr");
}

Test(swap_rr, swap_rr_size_l_b_0, .init=redirect_all_std)
{
    int first_list[6] = {6, 5, 4, 3, 2, 1};;
    int second_list[6] = {6, 5, 4, 3, 2, 1};
    int result[6] = {5, 4, 3, 2, 1, 6};
    int size_first_list = 6;
    int size_second_list = 0;

    swap_rr(first_list, second_list, size_first_list, size_second_list);
    for (int i = 0; i < 6; i++)
        cr_assert_eq(second_list[i], (6 - i));
    for (int j = 0; j < size_first_list; j++)
        cr_assert_eq(first_list[j], result[j]);
    cr_assert_stdout_eq_str("rr");
}

Test(swap_rr, swap_rr_good_par, .init=redirect_all_std)
{
    int first_list[6] = {1, 2, 3, 4, 5, 6};;
    int second_list[6] = {6, 5, 4, 3, 2, 1};
    int result_first[6] = {2, 3, 4, 5, 6, 1};
    int result_second[6] = {5, 4, 3, 2, 1, 6};
    int size_first_list = 6;
    int size_second_list = 6;

    swap_rr(first_list, second_list, size_first_list, size_second_list);
    for (int i = 0; i < size_first_list; i++)
        cr_assert_eq(first_list[i], result_first[i]);
    for (int j = 0; j < size_second_list; j++)
        cr_assert_eq(second_list[j], result_second[j]);
    cr_assert_stdout_eq_str("rr");
}