/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** lib_my
*/

void my_putchar(char x);

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}
