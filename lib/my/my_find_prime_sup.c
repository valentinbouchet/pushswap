/*
** EPITECH PROJECT, 2020
** my_find_prime_sup
** File description:
** lib_my
*/

int find_prime(int nb)
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

int my_find_prime_sup(int nb)
{
    if (nb % 2 == 0 && nb < 2)
        nb++;
    while (find_prime(nb) == 0) {
        nb += 2;
    }
    return (nb);
}
