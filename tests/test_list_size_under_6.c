/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** test list size 3
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(control_swap, size_4_case_1)
{
    int list[4] = {1, 2, 3, 4};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_2)
{
    int list[4] = {1, 2, 4, 3};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_3)
{
    int list[4] = {1, 3, 2, 4};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_4)
{
    int list[4] = {1, 3, 4, 2};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_5)
{
    int list[4] = {4, 2, 3, 1};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_6)
{
    int list[4] = {2, 4, 4, 1};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_7)
{
    int list[4] = {4, 2, 3, 1};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_8)
{
    int list[4] = {4, 3, 2, 1};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_9)
{
    int list[4] = {3, 4, 2, 3};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_4_case_10)
{
    int list[4] = {-9, -5, -6, -4};
    cr_assert_eq(control_swap(list, 4), 1);
}

Test(control_swap, size_5_case_1)
{
    int list[5] = {1, 2, 3, 4, 5};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_2)
{
    int list[5] = {1, 5, 2, 98, 5};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_3)
{
    int list[5] = {-1, 2, 3, -8, 10};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_4)
{
    int list[5] = {2, 1, 4, 3, 5};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_5)
{
    int list[5] = {1, 3, 5, 4, 2};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_6)
{
    int list[5] = {-9, 95, 321, -54545641, 5465};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_7)
{
    int list[5] = {5, 4, 3, 2, 1};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_8)
{
    int list[5] = {6, 5, 1, 2, 4};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_9)
{
    int list[5] = {6, 2, 8, 5, 9};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_5_case_10)
{
    int list[5] = {9, 6, 5, 4, 2};
    cr_assert_eq(control_swap(list, 5), 1);
}

Test(control_swap, size_6_case_1)
{
    int list[6] = {1, 2, 3, 4, 5, 6};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_2)
{
    int list[6] = {9, 6, 2, 5 ,1 ,2};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_3)
{
    int list[6] = {-9, 5, -6, 2, 6, 9};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_4)
{
    int list[6] = {5, 3, 4, 5, 8, 6};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_5)
{
    int list[6] = {6, 5, 4, 3, 2, 1};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_6)
{
    int list[6] = {9, 5, 1, 7, 5, 3};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_7)
{
    int list[6] = {1, 6, 2, 5, 3, 4};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_8)
{
    int list[6] = {6, 1, 5, 2, 4, 3};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_9)
{
    int list[6] = {9, 5, 6, 4, 8, 3};
    cr_assert_eq(control_swap(list, 6), 1);
}

Test(control_swap, size_6_case_10)
{
    int list[6] = {-6, -45, -62, -1, -2};
    cr_assert_eq(control_swap(list, 6), 1);
}

// Test(control_swap, size_4_case_11)
// {
//     int list[4] = {};
//     cr_assert_eq(control_swap(list, 4), 1);
// }

// Test(control_swap, size_4_case_12)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_13)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_14)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_15)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_16)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_17)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_18)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_19)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }

// Test(control_swap, size_4_case_20)
// {
//     int list[3] = {};
//     cr_assert_eq(control_swap(list, 3), 1);
// }