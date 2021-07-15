/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** task 03
*/

#include "palindrome.h"

int counter(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int j = counter(str) - 1;
    int a = 0;
    char s;

    while (a <= j) {
        s = str[a];
        str[a] = str[j];
        str[j] = s;
        j = j - 1;
        a = a + 1;
    }
    return (str);
}
