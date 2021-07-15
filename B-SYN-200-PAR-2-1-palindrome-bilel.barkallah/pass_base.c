/*
** EPITECH PROJECT, 2021
** pass
** File description:
** base
*/

#include "palindrome.h"

int pass_base_int(char *str, int base)
{
    int temp = 0;
    int i = 0;

    while (str[i] != '\0') {
        temp = temp * base + (str[i] - 48);
        i++;
    }
    return (temp);
}

char *pass_base_to(int nbr, int base)
{
    char *stock = NULL;
    int temp = nbr;
    int index = 0;

    for (; temp/=base; index++);
    stock = malloc(sizeof(char) * (index + 1));
    if (nbr == 0)
        return ("0");
    for (int i = index; nbr; i--) {
        stock[i] = nbr % base + 48;
        nbr /= base;
    }
    return (stock);
}
