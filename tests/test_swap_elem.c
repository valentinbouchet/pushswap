/*
** EPITECH PROJECT, 2020
** bootstrap pushswap
** File description:
** test swap elem
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "pushswap.h"

Test(swap_elem, index1_greater_than_index2)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int index1 = 2;
    int index2 = 4;
    swap_elem(array, index1, index2);
    cr_assert_eq(array[index1], 5);
    cr_assert_eq(array[index2], 3);
}

Test(swap_elem, index1_lower_than_index2)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int index1 = 4;
    int index2 = 2;
    swap_elem(array, index1, index2);
    cr_assert_eq(array[index1], 3);
    cr_assert_eq(array[index2], 5);
}

Test(swap_elem, index1_equal_index2)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int index1 = 3;
    int index2 = 3;
    swap_elem(array, index1, index2);
    cr_assert_eq(array[index1], 4);
    cr_assert_eq(array[index2], 4);
}

// Test(swap_elem, array_null, .init=redirect_all_std)
// {
//     int index1 = 3;
//     int index2 = 3;
//     swap_elem(NULL, index1, index2);
//     cr_assert_stderr_eq_str("Array is null");
// }

// Test(bubble_sort_array, bubble_nothing_to_do)
// {
//     int array[6] = {1, 2, 3, 4, 5, 6};
//     int result[6] = {1, 2, 3, 4, 5, 6};
//     bubble_sort_array(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(bubble_sort_array, bubble_one_move)
// {
//     int array[6] = {1, 2, 4, 3, 5, 6};
//     int result[6] = {1, 2, 3, 4, 5, 6};
//     bubble_sort_array(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(bubble_sort_array, bubble_all_array)
// {
//     int array[6] = {6, 5, 4, 3, 2, 1};
//     int result[6] = {1, 2, 3, 4, 5, 6};
//     bubble_sort_array(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(swap, good_array)
// {
//     int array[6] = {1, 2, 3, 4, 5, 6};
//     swap(array);
//     cr_assert_eq(array[0], 2);
//     cr_assert_eq(array[1], 1);
// }

// Test(swap, null_array, .init=redirect_all_std)
// {
//     swap(NULL);
//     cr_assert_stderr_eq_str("Array is null");
// }

// Test(rotate_left, simple_rotate_left)
// {
//     int array[6] = {6, 5, 4, 3, 2, 1};
//     int result[6] = {5, 4, 3, 2, 1, 6};
//     rotate_left(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(rotate_right, simple_rotate_right)
// {
//     int array[6] = {6, 5, 4, 3, 2, 1};
//     int result[6] = {1, 6, 5, 4, 3, 2};
//     rotate_right(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(control_bubble_sort_array, one_moove)
// {
//     int array[6] = {1, 2, 3, 5, 4, 6};
//     int result[6] = {1, 2, 3, 4, 5, 6};
//     control_bubble_sort_array(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(control_bubble_sort_array, multiple_moove)
// {
//     int array[6] = {6, 5, 4, 3, 2, 1};
//     int result[6] = {1, 2, 3, 4, 5, 6};
//     control_bubble_sort_array(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(control_bubble_sort_array, no_one_moove)
// {
//     int array[6] = {6, 5, 4, 3, 2, 1};
//     int result[6] = {1, 2, 3, 4, 5, 6};
//     control_bubble_sort_array(array, 6);
//     for (int i = 0; i < 6; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(bubble_sort_array, no_one_moove)
// {
//     int array[3] = {6, 5, 4};
//     int result[3] = {5, 6, 4};
//     bubble_sort_array(array, 3);
//     for (int i = 0; i < 3; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(bubble_sort_array, no_one_moove2)
// {
//     int array[3] = {5, 6, 4};
//     int result[3] = {4, 5, 6};
//     bubble_sort_array(array, 3);
//     for (int i = 0; i < 3; i++)
//         cr_assert_eq(array[i], result[i]);
// }

// Test(check_error, a)
// {
//     int array[3] = {5, 6, 4};
//     cr_assert_eq(check_error(array, 3), 1);
// }

// Test(check_error, b)
// {
//     int array[3] = {4, 5, 6};
//     cr_assert_eq(check_error(array, 3), 0);
// }

// Test(check_error, c)
// {
//     cr_assert_eq(check_error(NULL, 3), -1);
// }