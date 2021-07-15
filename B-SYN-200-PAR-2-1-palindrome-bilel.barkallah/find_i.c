/*
** EPITECH PROJECT, 2021
** palindrome
** File description:
** find
*/

#include "palindrome.h"

int find_imin(int ac, char **av, palindrome_t *pal)
{
    for (int i = 0; av[i] != NULL; i++) {
        if ((strncmp(av[i], "-imin", 5)) == 0) {
            pal->imin = atoi(av[i + 1]);
            return (pal->imin);
        }
        else
            pal->imin = 0;
    }
    return (pal->imin);
}

int find_imax(int ac, char **av, palindrome_t *pal)
{
    for (int i = 0; av[i] != NULL; i++) {
        if ((strncmp(av[i], "-imax", 5)) == 0) {
            pal->imax = atoi(av[i + 1]);
            return (pal->imax);
        }
        else
            pal->imax = 100;
    }
    return (pal->imax);
}
