/*
** EPITECH PROJECT, 2020
** my_showstr
** File description:
** lib_my
*/

char *my_putstr(char const *str);

int my_str_isprintable(char const *str);

void my_putchar(char c);

int my_strlen(char const *str);

int my_putnbr_base(int nbr, char const *base);

int my_put_nbr(int nbr);

int my_putnbr_base_hexa(int nbr, char const *base)
{
    int size = my_strlen(base);

    if (nbr < 0) {
        nbr = nbr * -1;
        my_putchar('-');
    }
    if (nbr == 0) {
        my_put_nbr(0);
    } else {
        my_putnbr_base_hexa(nbr / size, base);
        my_putchar(base[nbr % size]);
    }
    return (0);
}

void my_print_hexa(char const *str, int i)
{
    if (str[i] >= 32 && str[i] <= 126) {
        my_putchar(str[i]);
    } else {
        my_putchar('\\');
        my_putnbr_base_hexa(str[i], "0123456789abcdef");
    }
}

int my_showstr(char const *str)
{
    if (my_str_isprintable(str) == 1) {
        my_putstr(str);
    } else {
        for (int i = 0; str[i]; i++) {
            my_print_hexa(str, i);
        }
    }
    return (0);
}
