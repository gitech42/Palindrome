/*
** EPITECH PROJECT, 2020
** EPITECH PROJECT
** File description:
** ARRAYS
*/

#include "palindrome.h"

int my_putstr(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
