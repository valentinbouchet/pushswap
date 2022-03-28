/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** lib_my
*/

void my_putchar(char x);

void my_put_nbr_extrem(void)
{
    my_putchar('-');
    my_putchar(2 + 48);
    my_putchar(1 + 48);
    my_putchar(4 + 48);
    my_putchar(7 + 48);
    my_putchar(4 + 48);
    my_putchar(8 + 48);
    my_putchar(3 + 48);
    my_putchar(6 + 48);
    my_putchar(4 + 48);
    my_putchar(8 + 48);
}

int my_put_nbr(int nb)
{
    int variable;

    if (nb == -2147483648){
        my_put_nbr_extrem();
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb *= (-1);
    }
    if (nb > 9) {
        variable = nb % 10;
        nb /= 10;
        my_put_nbr(nb);
        my_putchar(variable + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}
