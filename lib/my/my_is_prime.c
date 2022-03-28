/*
** EPITECH PROJECT, 2020
** my_is_prime
** File description:
** lib_my
*/

int my_is_prime(int nb)
{
    int a = 2;

    if (nb <= 1 || nb == 4)
        return (0);
    if (nb == 2 || nb == 3)
        return (1);
    while (a != nb / 2) {
        if (nb % a == 0)
            return (0);
        a++;
    }
    return (1);
}
