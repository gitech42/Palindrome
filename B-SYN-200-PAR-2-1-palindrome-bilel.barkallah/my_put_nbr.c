/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** put_nbr
*/

#include "palindrome.h"

int my_put_nbr(int nb)
{
    int r = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 0) {
        if (nb > 9) {
            r = (nb % 10);
            nb = (nb - r) / 10;
            my_put_nbr(nb);
            my_putchar('0' + r);
        }
        else
            my_putchar(nb % 10 + '0');
    }
}
