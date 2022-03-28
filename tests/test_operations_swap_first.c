/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** test operations 1
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(swap_a, good_size_swap_a)
{
    int list[6] = {1, 2, 3, 4, 5, 6};
    swap_a(list, 6);
    cr_assert_eq(list[0], 2);
    cr_assert_eq(list[1], 1);
}

Test(swap_a, not_good_size_swap_a)
{
    int list[1] = {1};
    swap_a(list, 1);
    cr_assert_eq(list[0], 1);
}

Test(swap_ab, good_size_swap_ab, .init=redirect_all_std)
{
    int list_a[6] = {1, 2, 3, 4, 5, 6};
    int list_b[6] = {6, 5, 4, 3, 2, 1};
    swap_ab(list_a, list_b, 6, 6);
    cr_assert_eq(list_a[0], 2);
    cr_assert_eq(list_a[1], 1);
    cr_assert_eq(list_b[0], 5);
    cr_assert_eq(list_b[1], 6);
    cr_assert_stdout_eq_str("ss");
}

Test(swap_ab, not_good_size_only_b, .init=redirect_all_std)
{
    int list_a[6] = {1, 2, 3, 4, 5, 6};
    int list_b[1] = {6};
    swap_ab(list_a, list_b, 6, 1);
    cr_assert_eq(list_a[0], 2);
    cr_assert_eq(list_a[1], 1);
    cr_assert_eq(list_b[0], 6);
    cr_assert_stdout_eq_str("ss");
}

Test(swap_ab, not_good_size_only_a, .init=redirect_all_std)
{
    int list_a[1] = {1};
    int list_b[6] = {6, 5, 4, 3, 2, 1};
    swap_ab(list_a, list_b, 1, 6);
    cr_assert_eq(list_a[0], 1);
    cr_assert_eq(list_b[0], 5);
    cr_assert_eq(list_b[1], 6);
    cr_assert_stdout_eq_str("ss");
}