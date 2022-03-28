/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** test list size 3
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(control_swap, size_2_case_1)
{
    int list[2] = {1, 3};
    cr_assert_eq(control_swap(list, 2), 1);
}

Test(control_swap, size_2_case_2)
{
    int list[2] = {3, 1};
    cr_assert_eq(control_swap(list, 2), 1);
}

Test(control_swap, size_3_case_1)
{
    int list[3] = {1, 3, 2};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_2)
{
    int list[3] = {3, 1, 2};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_3)
{
    int list[3] = {2, 1, 3};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_4)
{
    int list[3] = {2, 3, 1};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_5)
{
    int list[3] = {3, 2, 1};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_6)
{
    int list[3] = {2, 3, 2};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_7)
{
    int list[3] = {2, 2, 1};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_8)
{
    int list[3] = {1, 3, 1};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_9)
{
    int list[3] = {3, 1, 3};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_10)
{
    int list[3] = {3, 1, 1};
    cr_assert_eq(control_swap(list, 3), 1);
}

Test(control_swap, size_3_case_11)
{
    int list[3] = {1, 2, 3};
    cr_assert_eq(control_swap(list, 3), 1);
}

// Test(control_swap, size_3_case_12)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_13)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_14)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_15)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_16)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_17)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_18)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_19)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_3_case_20)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }