/*
** EPITECH PROJECT, 2020
** my_swap
** File description:
** lib_my
*/

void my_swap(int *a, int *b)
{
    int change;

    change = *a;
    *a = *b;
    *b = change;
}
