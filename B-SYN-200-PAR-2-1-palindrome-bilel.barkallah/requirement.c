/*
** EPITECH PROJECT, 2021
** synthese
** File description:
** palindrome
*/

#include <stdlib.h>
#include <stdio.h>

int my_factrec_synthesis(int nb)
{
    int fact = 0;

    if (nb > 12 || nb < 0)
        return (0);
    if (nb == 0)
        return (1);
    else
        fact = (nb * my_factrec_synthesis(nb - 1));
    return (fact);
}

int my_squareroot_synthesis(int nb)
{
    int stock = 0;

    if (nb == 0 || nb == 1)
        return (nb);
    if (nb < 0)
        return (-1);
    while (stock < 46341 && stock < nb + 1) {
        if (stock * stock == nb)
            return stock;
        stock++;
    }
    if (stock % 2 != 0)
        return (-1);
    return (-1);
}
