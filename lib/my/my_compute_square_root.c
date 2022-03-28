/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** lib_my
*/

int my_compute_square_root(int nb)
{
    int a = 1;

    if (nb <= 0)
        return (0);
    while (a * a != nb) {
        a += 1;
        if (a * a > nb)
            return (0);
    }
    return (a);
}
