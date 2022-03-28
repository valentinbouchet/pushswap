/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** test operations 2
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(swap_pa, swap_pa_l_a_empty, .init=redirect_all_std)
{
    int first_list[6];
    int second_list[6] = {6, 5, 4, 3, 2, 1};
    int size_first_list = 0;
    int size_second_list = 6;

    swap_pa(first_list, second_list, &size_first_list, &size_second_list);
    cr_assert_eq(size_first_list, 1);
    cr_assert_eq(size_second_list, 5);
    cr_assert_eq(first_list[0], 6);
    for (int i = 0; i < 5; i++)
        cr_assert_eq(second_list[i], (size_second_list - i));
    cr_assert_stdout_eq_str("pa");
}

Test(swap_pa, swap_pa_l_b_empty, .init=redirect_all_std)
{
    int first_list[6] = {1, 2, 3, 4, 5, 6};
    int second_list[6];
    int size_first_list = 6;
    int size_second_list = 0;

    swap_pa(first_list, second_list, &size_first_list, &size_second_list);
    cr_assert_eq(size_first_list, 6);
    cr_assert_eq(size_second_list, 0);
    for (int i = 0; i < size_first_list; i++)
        cr_assert_eq(first_list[i], (i + 1));
    cr_assert_stdout_eq_str("pa");
}

Test(swap_pa, swap_pa_good_params, .init=redirect_all_std)
{
    int first_list[7] = {1, 2, 3, 4, 5, 6};
    int second_list[7] = {0, 6, 5, 4, 3, 2, 1};
    int size_first_list = 6;
    int size_second_list = 7;

    swap_pa(first_list, second_list, &size_first_list, &size_second_list);
    cr_assert_eq(size_first_list, 7);
    cr_assert_eq(size_second_list, 6);
    for (int i = 0; i < size_first_list; i++)
        cr_assert_eq(first_list[i], i);
    for (int j = 0; j < size_second_list; j++)
        cr_assert_eq(second_list[j], (size_second_list - j));
    cr_assert_stdout_eq_str("pa");
}

Test(swap_pb, swap_pb_l_a_empty, .init=redirect_all_std)
{
    int first_list[6];
    int second_list[6] = {6, 5, 4, 3, 2, 1};
    int size_first_list = 0;
    int size_second_list = 6;

    swap_pb(first_list, second_list, &size_first_list, &size_second_list);
    cr_assert_eq(size_second_list, 6);
    cr_assert_eq(size_first_list, 0);
    for (int i = 0; i < size_second_list; i++)
        cr_assert_eq(second_list[i], (size_second_list - i));
    cr_assert_stdout_eq_str("pb");
}

Test(swap_pb, swap_pb_l_b_empty, .init=redirect_all_std)
{
    int first_list[6] = {1, 2, 3, 4, 5, 6};
    int second_list[6];
    int size_first_list = 6;
    int size_second_list = 0;

    swap_pb(first_list, second_list, &size_first_list, &size_second_list);
    cr_assert_eq(size_first_list, 5);
    cr_assert_eq(size_second_list, 1);
    cr_assert_eq(second_list[0], 1);
    for (int i = 0; i < size_second_list; i++) {
        cr_assert_eq(first_list[i], (i + 2));
    }
    cr_assert_stdout_eq_str("pb");
}

Test(swap_pb, swap_pb_good_params, .init=redirect_all_std)
{
    int first_list[8] = {1, 2, 3, 4, 5, 6};
    int second_list[8] = {0, 6, 5, 4, 3, 2, 1};
    int size_first_list = 6;
    int size_second_list = 7;

    swap_pb(first_list, second_list, &size_first_list, &size_second_list);
    cr_assert_eq(size_first_list, 5);
    cr_assert_eq(size_second_list, 8);
    for (int i = 0; i < size_first_list; i++)
        cr_assert_eq(first_list[i], (i + 2));
    cr_assert_eq(second_list[0], 1);
    cr_assert_eq(second_list[1], 0);
    for (int j = 2; j < size_second_list; j++)
        cr_assert_eq(second_list[j], (size_second_list - j));
    cr_assert_stdout_eq_str("pb");
}